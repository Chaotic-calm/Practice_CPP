#include <iostream>

class OverloadedExample {
public:
  
    void printValue(int x) {
        std::cout << "Integer value: " << x << std::endl;
    }
    void printValue(double a, double b) {
        std::cout << "Double values: " << a << " and " << b << std::endl;
    }
    void printValue(const std::string& str) {
        std::cout << "String value: " << str << std::endl;
    }
};

int main() {
    OverloadedExample example;

    example.printValue(42);                 // Calls the first version
    example.printValue(3.14, 2.71);         // Calls the second version
    example.printValue("Hello, C++!");     // Calls the third version

    return 0;
}
