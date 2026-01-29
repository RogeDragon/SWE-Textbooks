
#include <future>
#include <iostream>

int square(int x){
    return x*x;
}

int main() {
    std::future<int> async_function = std::async(square, 12);
    int result = async_function.get();

    std::cout << result << std::endl;

    return 0;
}