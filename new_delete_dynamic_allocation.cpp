#include <iostream>
#include <cstring> // Include cstring for strlen and strcpy
using namespace std;

class author {
    char *name;

public:
    author(char *st) {
        int size = strlen(st);
        name = new char[size + 1];
        strcpy(name, st);
    }

    void show() {
        cout << name << "\n";
        cout << "length=" << strlen(name) << "\n";
    }

    ~author() {
        delete[] name;
    }
};

int main() { // Change void to int
    author a("technical publisher");
    author b("pune");
    a.show();
    b.show();

    return 0; // Add return statement
}
