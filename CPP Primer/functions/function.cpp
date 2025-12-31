
#include <iostream>
#include <string>
#include <initializer_list>

#include <iterator>

using std::cout, std::cin, std::endl;
using std::string;
using std::initializer_list;


//this function resets the value at the pointer
void PointerReset(int *int_pointer){     //The value passed in is copied, not the actual int_pointer 
    *int_pointer = 0;
}

int StaticVariableTesting(){
    static int static_example = 0;
    return static_example++;
}

//simple function swapping integers
void SwapIntegers(int *p1, int *p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

//this function uses std::end, and std::begin. For built in array types, it returns a *T 
void PrintArray(int *begin, int *end){
    int counter = 0;

    while (begin != end){
        cout << "The value of at index " << counter << " is: "<< *begin++ << endl;
        counter++;
    }
}

void VarArgs(initializer_list<int> l1){
    for (auto start = l1.begin(), last = l1.end(); start != last; start++){
        cout << "Arguments passed into function: " << *start << endl;
    }
}


int main(){

    //this section is messing around with static local variables
    for (int x = 10; x < 20; x++){
        cout << "The value of the static varaible is: " << StaticVariableTesting() << endl;
    }

    cout << endl;
    cout << endl;
    
    //this is just messing around with pointers
    int pointer_example = 10;
    int *int_pointer = &pointer_example;

    cout << "The value of the integer 'example' is: " << pointer_example << endl;
    PointerReset(int_pointer);
    cout << "The value of the integer 'example' is: " << pointer_example << endl;

    cout << endl;
    cout << endl;

    //this is just swapping integers with pointers
    int x = 10, y = 30;

    cout << "The value of the integer 'x' is: " << x << endl;
    cout << "The value of the integer 'y' is: " << y << endl;
    cout << endl;

    SwapIntegers(&x, &y); //no need to pass in a seperate x_pointer varaibla as the address is used as a intialiser

    cout << "The value of the integer 'x' is: " << x << endl;
    cout << "The value of the integer 'y' is: " << y << endl;

    cout << endl;
    cout << endl;

    //printing the contents of an array
    int my_array[] = {1, 2, 3, 4, 5};
    PrintArray(std::begin(my_array), std::end(my_array));

    cout << endl;
    cout << endl;

    //Messing about with varaible arguments in c++
    VarArgs({1, 2, 3, 4, 5});

    return 0;
}

