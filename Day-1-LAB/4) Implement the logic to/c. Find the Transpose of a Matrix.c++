// c. Find the Transpose of a Matrix

#include <iostream>
using namespace std;

int main() {

    int r, c;
    int matrix[100][100];

    cout << "Enter rows: ";
    cin >> r;

    cout << "Enter columns: ";
    cin >> c;

    cout << "Enter matrix:\n";

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Transpose:\n";

    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            cout << matrix[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}