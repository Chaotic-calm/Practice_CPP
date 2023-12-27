#include<iostream>

using namespace std;

class complex {
    int a, b;
public:
    complex() {}

    void getvalue() {
        cout << "Enter the Two Numbers:";
        cin >> a >> b;
    }

    void operator++() {
        a = ++a;
        b = ++b;
    }

    void operator--() {
        a = --a;
        b = --b;
    }

    void display() {
        cout << a << "+\t" << b << "i" << endl;
    }
};

int main() {
    complex obj;
    obj.getvalue();
    ++obj;
    cout << "Increment Complex Number\n";
    obj.display();
    --obj;
    cout << "Decrement Complex Number\n";
    obj.display();

    return 0;
}
