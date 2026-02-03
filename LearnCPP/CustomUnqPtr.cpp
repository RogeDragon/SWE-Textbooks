#include <iostream>
#include <string>

template <typename T>
class UnqPtr {
    T* m_ptr{};  

    public:
    UnqPtr(T* ptr) : m_ptr(ptr) {
        std::cout << "UnqPtr has been created" << std::endl;
    }

    ~UnqPtr(){
        std::cout << "UnqPtr has been destroyed" << std::endl;
        delete m_ptr;
    }

    //deleting the constructors makes it a unq ptr
    UnqPtr(const UnqPtr& other) = delete;
    UnqPtr& operator=(const UnqPtr& other) = delete;
};

class Example {
    public:
    Example() {
        std::cout << "Example has been created" << std::endl;
    }

    ~Example() {
        std::cout << "Example has been deleted" << std::endl;
    }
};

int main() {
    //testing the functionality
    UnqPtr<Example> example(new Example());

    return 0;
}