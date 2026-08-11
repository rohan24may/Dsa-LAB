// b. Find the matrix multiplication

#include <iostream>
using namespace std;

int main() {

    int r1, c1, r2, c2;
    int A[100][100], B[100][100], C[100][100];

    cout << "Rows of first matrix: ";
    cin >> r1;

    cout << "Columns of first matrix: ";
    cin >> c1;

    cout << "Enter first matrix:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Rows of second matrix: ";
    cin >> r2;

    cout << "Columns of second matrix: ";
    cin >> c2;

    if (c1 != r2) {
        cout << "Matrix multiplication not possible.";
        return 0;
    }

    cout << "Enter second matrix:\n";
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {

            C[i][j] = 0;

            for (int k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "Result:\n";

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}