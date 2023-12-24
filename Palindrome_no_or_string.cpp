#include <iostream>
#include <cstring>

using namespace std;

class Palindrome {
public:
    void checkNumberPalindrome() {
        int num, r, sum = 0, temp;

        cout << "Enter a number: ";
        cin >> num;

        for (temp = num; num != 0; num /= 10) {
            r = num % 10;
            sum = sum * 10 + r;
        }

        if (temp == sum)
            cout << temp << " is a palindrome." << endl;
        else
            cout << temp << " is not a palindrome." << endl;
    }

    void checkStringPalindrome() {
        char text[50], rev[50];

        cout << "\nEnter a string: ";
        cin.ignore(); // Clear the input buffer
        cin.getline(text, 50);

        int len = strlen(text);

        for (int i = len - 1, k = 0; i >= 0; i--, k++)
            rev[k] = text[i];

        rev[len] = '\0';

        if (strcmp(text, rev) == 0)
            cout << "The string is a palindrome." << endl;
        else
            cout << "The string is not a palindrome." << endl;
    }
};

int main() {
    Palindrome palindromeObj;

    palindromeObj.checkNumberPalindrome();
    palindromeObj.checkStringPalindrome();

    return 0;
}
