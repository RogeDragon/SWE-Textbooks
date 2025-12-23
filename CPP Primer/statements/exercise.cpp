
#include <iostream>
#include <string>

using std::cout, std::cin, std::endl;
using std::string;

int main(){
    string Word;
    string LastWord;

    unsigned int Count = 1;
    unsigned int MaxCount = 0;
    
    while (cin >> Word){
        if (LastWord == Word) Count++;
        else Count = 1;

        if (MaxCount < Count) MaxCount = Count;

        LastWord = Word;
    }

    if (MaxCount == 0) {
        cout << "There where no duplicated words!" << endl;
        return 0;
    }

    cout << "The Maximum number of repeated numbers is: " << MaxCount << endl;

    return 0;
}