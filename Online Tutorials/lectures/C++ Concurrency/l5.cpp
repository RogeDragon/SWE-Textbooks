
#include <thread>
#include <future>

#include <iostream>
#include <string>


void foo(std::promise<std::string> &&prms) {
    std::string str("Hello from future!");
    prms.set_value(str);
}


int main(){
    //there is a std function that abstracts this away, std::async
    //promise and future are special data structure for returning values, protects access
    std::promise<std::string> prms;
    std::future<std::string> ftr = prms.get_future();

    std::thread thr(&foo, std::move(prms));

    std::string str = ftr.get();
    std::cout << str << std::endl;
    std::cout << "Hello from main" << std::endl;

    thr.join();
    return 0;
}

/*
Notes:
Shared Data is prone to race conditions, Unique data is not prone to race condtions
Unique data has a problem, how can we pass the data back to the main thread?

The Two Paradigms:
shared data: using locks to protect
unique data: using futures

you cannot use unique data everywhere. In fact, it is best to use it only when you are
dividing up tasks. 

Task vs Thread Based Programming

*/