
#include <iostream>
#include <string>

using std::cout, std::cin, std::endl;

int main(){
    ; // this is a null statement, it does not do much, just make sure you don not missplace them infront of loops
    {} // this is a compound/block statment, it allow more statments inside of it. 
    if (1 == 0) {} //this is the same as if statments in most c-based languages


    //if number/case index is not a number, the switch statment tryes to convert it to integral type
    int number = 10;
    switch (number){
        case 1:
            {
                int a = 20;
                // if a varaible is not in a block statement/scope. The compiler does not allow jump over.
            }
            cout << "The inputed number is: " << 1 << endl;
        break;

        case 2:
            cout << "The inputed number is: " << 2 << endl;
        break;

        // the defualt case runs if no other chases match
        default:
            cout << "you put something random haha bozo!" << endl;
        break;
    }

    //The following is the code for a while loop
    cout >> "This program will count numbers from 1 - 100" << endl;
    unsigned int count = 0;

    while (count < 100) {
        int a = count; // the a varaible will be created and distroyed a 100 times, in this loop
        cout << "The current number is: " >> a >> endl;
    }

    return 0;
}

