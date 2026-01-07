
#include <iostream>
#include <string>

// this peice of code is so I can mess about with function pointers
using operation = double(double, double);

double add(double num1, double num2){return num1 + num2;}

double GetInput(){
    double result;

    std::cout << "Please input a Number: ";
    std::cin >> result;

    return result;
}

void OutputResult(operation func){
    double num1 = GetInput();
    double num2 = GetInput();

    std::cout << "Caculator Test (Addition): " << func(num1, num2) << std::endl; 
}

int main(){
    OutputResult(add);
    return 0;
}