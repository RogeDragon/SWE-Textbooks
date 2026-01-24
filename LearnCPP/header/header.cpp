#include <iostream>
#include <string>

void LogMessage(std::string message, std::ostream& output);

int main() {
    LogMessage("Random Message, Hahaha", std::cout);
    return 0;
}