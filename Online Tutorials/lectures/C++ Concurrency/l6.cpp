
#include <iostream>
#include <chrono>

#include <string>
#include <vector>

#include <thread>
#include <future>

void RndFunction(){
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << std::this_thread::get_id() << " ";
}


int main()  {
    std::cout << "Main Thread ID: " << std::this_thread::get_id() << std::endl;

    std::vector<std::future<void>> futures;
    for (int i = 0; i < 50; i ++) {
        std::future<void> ftr = std::async(&RndFunction);
        futures.push_back(std::move(ftr)); //futures have no copy constructor, to prevent threads messign up
    }

    for (auto &ftr: futures) {
        ftr.wait();
    } 

    return 0;
}