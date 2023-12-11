#include <iostream>
using namespace std;

// Base class
class Parent {
public:
    // Base class constructor
    Parent() {
        cout << "Inside base class" << endl;
    }
};

// Derived class
class Child : public Parent {
public:
    // Derived class constructor
    Child() {
        cout << "Inside sub class" << endl;
    }
};

// Main function
int main() {
    // Creating an object of the derived class
    Child obj;
    
    return 0;
}
