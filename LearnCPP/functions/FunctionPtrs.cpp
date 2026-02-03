
#include <iostream>
#include <functional>

//using ArthematicFunc = int (*)(int, int);


//Note: this function does integer divsion, flooring everything
int divide(int a, int b){
    return a / b;
}

int subtract(int a, int b){
    return a - b;
}

int multiply(int a, int b) {
    return a - b;
}

int add(int a, int b){
    return a + b;
}

using ArthematicFunc = std::function<int(int, int)>;

ArthematicFunc getFunction(char a){
    switch (a){
        case '+': return &add;
        case '-': return &subtract;
        case '*': return &multiply;
        case '/': return &divide;
    }
    
    return nullptr;
}

int a = 0;
int b = 0;
char op;

int main() {

    std::cout << "Please input your first number: " << std::flush;
    std::cin >> a;

    std::cout << "Please input your second number: " << std::flush;
    std::cin >> b;

    std::cout << "Please input a operation (+-/*)" << std::flush;
    std::cin >> op;

    ArthematicFunc fcn{ getFunction(op) };
    if (fcn)
        std::cout << fcn(a, b) << std::endl;

    return 0; 
}