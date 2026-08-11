// 5) Write a program to find sum of every row and every column
// in a two-dimensional array.

#include <iostream>
using namespace std;

int main() {

    int r, c;
    int matrix[100][100];

    cout << "Enter rows: ";
    cin >> r;

    cout << "Enter columns: ";
    cin >> c;

    cout << "Enter elements:\n";

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < r; i++) {

        int sum = 0;

        for (int j = 0; j < c; j++) {
            sum += matrix[i][j];
        }

        cout << "Sum of row " << i + 1 << " = " << sum << endl;
    }

    for (int j = 0; j < c; j++) {

        int sum = 0;

        for (int i = 0; i < r; i++) {
            sum += matrix[i][j];
        }

        cout << "Sum of column " << j + 1 << " = " << sum << endl;
    }

    return 0;
}