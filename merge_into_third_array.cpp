#include <iostream>
using namespace std;

int main() {
    int A[9], B[6], size1, size2, size, i, j, k, C[15];

    cout << "Enter Array 1 Size: ";
    cin >> size1;
    cout << "Enter Array 1 Elements: ";
    for (i = 0; i < size1; i++) {
        cin >> A[i];
    }

    cout << "Enter Array 2 Size: ";
    cin >> size2;
    cout << "Enter Array 2 Elements: ";
    for (i = 0; i < size2; i++) {
        cin >> B[i];
    }

    size = size1 + size2;

    // Merge arrays A and B alternatively into C
    for (i = 0, j = 0, k = 0; k < size; k++) {
        if (k % 2 == 0 && i < size1) {
            C[k] = A[i++];
        } else if (j < size2) {
            C[k] = B[j++];
        }
    }
   
    cout << "Merged array C: \n";
    for (i = 0; i < size; i++) {
        cout << C[i] << " ";
    }

    return 0;
}
