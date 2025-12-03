
#include <iostream>
#include <string>

using std::cin, std::cout, std::endl;

int main (){
    int var1, var2;

    cout << "This program adds two numbers together! " << endl;

    cout << "Please input your first number: " << endl;
    cin >> var1;

    cout << "Please input your second number: " << endl;
    cin >> var2;

    cout << "The result of the two numbers is: \n" << var1 + var2 << endl;

    return 0;
}

