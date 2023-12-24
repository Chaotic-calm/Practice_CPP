#include <iostream>

using namespace std;

int main() {
    const int numStudents = 50;
    int marks[numStudents];

    cout << "Enter marks for " << numStudents << " students:\n";
    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter marks for student " << (i + 1) << ": ";
        cin >> marks[i];
    }

    int sum = 0;
    for (int i = 0; i < numStudents; ++i) {
        sum += marks[i];
    }
    double average = static_cast<double>(sum) / numStudents;
    cout << "Average marks of " << numStudents << " students: " << average << endl;

    return 0;
}
