
#include <thread>
#include <vector>
#include <iostream>


//Simple implementation for a singly linked list
struct List {

    struct Node  {
        int x;
        Node *next;

        Node(int x): x(x), next(nullptr){}
    };

    Node *head;
    List() : head(nullptr) {}

    //Race Condition: if two threads are running this code at the same time, one of the nodes gets missed
    void insert(int x){
        Node *NewNode = new Node(x);
        NewNode->next = head;
        head = NewNode;

    }

    int count() const;

};

int List::count() const {
    int n = 0;

    auto current = head;
    while (current != nullptr){
        n++;
        current = current->next;
    }

    return n;
}

//function to add a 100 integers to the list
void InsertIntegers(List& InsertionList){
    for (int i = 0; i < 100; i++){
        InsertionList.insert(i);
    }
}


int main () {
    List list;
    std::vector<std::thread> workers;

    //creating a bunch of threads and joining them, adding elements to a list
    for (int i = 0; i < 10; i++){
        workers.push_back(std::thread(&InsertIntegers, std::ref(list)));
    }

    for (auto &thr: workers){
        thr.join();
    }

    //getting the total number of elements in the list
    int total = list.count();
    std::cout << total << std::endl;

    return 0;
}



/*
Concurrency Notes:
- Shared memory:
    1. Highly perfomant, can split up tasks between multiple threads
    2. Really hard to get right, easy to make mistakes

The above code works fine mostly. sometimes it breaks printing a number like 982.

Best way to think about a race condition scenrio: if one thread edits, second thread edits, 
second thread overrides first thread

Shared Data, multiple owners! Unique data, one owner!
Shared Data prone to race conditions
One Owner no race condtions
*/