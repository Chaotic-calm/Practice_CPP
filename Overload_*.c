#include <iostream>
using namespace std;

class Sk {
private:
    int x;
    int y;

public:
    
    Sk() : x(0), y(0) {}
    void getdata(int a, int b) {
        x = a;
        y = b;
    }
    void showdata() const {
        cout << "Data: " << x << ", " << y << endl;
    }

    Sk operator*(const Sk& c) const {
        Sk temp;
        temp.x = x * c.x;
        temp.y = y * c.y;
        return temp;
    }
};

int main() {
    Sk obj, obj1, obj2;

    obj.getdata(8, 9);
    cout << "Object 1 ";
    obj.showdata();

    obj1.getdata(6, 8);
    cout << "Object 2 ";
    obj1.showdata();

    obj2 = obj * obj1;
    cout << "Object 3";
    obj2.showdata();

    return 0;
}
