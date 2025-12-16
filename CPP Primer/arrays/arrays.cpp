
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

using std::string;

int main(){
    int *Pointers[10]; //creates an array of int pointers
    int (*ArrayPointer)[10]; // a pointer that pointe to an array of ten elements

    constexpr size_t example = 10; // though you can use int, due to gcc, it is best to used constexpr as it is a compile time constant
    int array_example[example] = {0, 1, 2}; // the rest of the array is vlaue intialised, for int it is 0;

    cout << array_example << endl;
    return 0;
}