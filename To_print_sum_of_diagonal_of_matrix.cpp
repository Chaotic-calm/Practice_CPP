#include <iostream>
using namespace std;

int main()
 {
    int i, j, m, n, a[8][8], sum = 0;

    cout << "Enter the order of the matrix: ";
    cin >> m >> n;

    if (m == n) 
{
cout << "\nEnter elements in the matrix:\n";
 for(i = 0; i < m; i++)
 {
 for(j = 0; j < n; j++)
  cin >> a[i][j];
 }  
        cout << "\nThe entered matrix of " << m << "*" << n << " order is:\n";
for (i = 0; i < m; i++)
 {
for (j = 0; j < n; j++)
 {
cout << a[i][j];
 if (i == j) 
 sum += a[i][j];
}
  cout << endl;
 }
 cout << "\nSum of diagonal elements of the matrix is: " << sum << endl;
 }
 else 
        cout << "Matrix should be a square matrix\n";
    
    return 0;
}

