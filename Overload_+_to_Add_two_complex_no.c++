#include <iostream>

using namespace std;

class Complex {
private:
    int num1, num2;

public:
    void accept() {
        cout << "\nEnter Two Complex Numbers:\n";
        cin >> num1 >> num2;
    }

    Complex operator+(const Complex& obj) {
        Complex result;
        result.num1 = num1 + obj.num1;
        result.num2 = num2 + obj.num2;
        return result;
    }

    void display() {
        cout << num1 << "+" << num2 << "i\n";
    }
};

int main() {
    Complex c1, c2, sum;

    c1.accept();
    c2.accept();

    sum = c1 + c2;

    cout << "\nEntered values:\n";
    cout << "\t";
    c1.display();
    cout << "\t";
    c2.display();

    cout << "\nAddition of Real and Imaginary Numbers:\n";
    cout << "\t";
    sum.display();

    return 0;
}
