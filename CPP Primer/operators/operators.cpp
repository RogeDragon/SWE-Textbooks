

#include <iostream>
#include <string>

using std::cout;
using std::cin;

using std::endl;

int main() {
    /*
    int i;
    double d;

    //example of right associativity
    d = i = 3.5;
    cout << "the value for d is: " << d << "\n" << "The value for i is: " << i << endl;

    //using the bistwise operators in programming
    cout << (~'q' << 6) << endl;


    int x[] = {10, 20, 30 , 40, 50};
    int (*p)[5] = &x; 
    cout << sizeof(p) << endl;
    cout << sizeof(*p) << endl;
    cout << sizeof(*p)/sizeof(p) << endl;
    //this is evaluated like integer division. 


    //this is a statment using the 
    int a, b; 
    cout << "Enter an integer to be added" << endl;
    cin >> a;
    cout << "Enter another integer to be added" << endl;
    cin >> b;

    cout << (a + 4, b + 4, a + b) << endl;
    */
    

    // how a twos complement number is represented in memory
    //-8   4   2   1   
    //1   0   1   0   // loses the ability to represent numbers above eight.


    //looking at type conversions between shorts and ints.
    unsigned short example_short = 0;
    example_short = ~example_short;

    cout << "The biggest 'unsigned short' variable is: " << example_short << endl;
    
    auto example_int = example_short + 1;
    cout << "checking if example int converted into a integer: " << example_int << endl;

    return 0;
}