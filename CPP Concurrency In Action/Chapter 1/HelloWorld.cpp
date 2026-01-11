
#include <iostream>
#include <thread>

void HelloWorld(){
    std::cout << "Hello World! Concurrency" << std::endl;
}

int main(){
    //Hello World
    std::cout << "Hello World!" << std::endl;

    //Hello World But Concurrent
    std::thread t(HelloWorld);
    t.join(); // this bit forces the main thread to wait for the child. Maybe done through a condition varaible

    return 0;
}