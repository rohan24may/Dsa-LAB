#include <iostream>
using namespace std;

int main()
{
    int A[100][3], B[100][3], C[200][3];

    int rows, cols;
    int nonZeroA, nonZeroB;

    cout << "Enter rows and columns: ";
    cin >> rows >> cols;

    cout << "Enter number of non-zero elements in A: ";
    cin >> nonZeroA;

    A[0][0] = rows;
    A[0][1] = cols;
    A[0][2] = nonZeroA;

    cout << "Enter triplets of A:\n";

    for (int i = 1; i <= nonZeroA; i++)
    {
        cin >> A[i][0] >> A[i][1] >> A[i][2];
    }

    cout << "Enter number of non-zero elements in B: ";
    cin >> nonZeroB;

    B[0][0] = rows;
    B[0][1] = cols;
    B[0][2] = nonZeroB;

    cout << "Enter triplets of B:\n";

    for (int i = 1; i <= nonZeroB; i++)
    {
        cin >> B[i][0] >> B[i][1] >> B[i][2];
    }

    int i = 1;
    int j = 1;
    int k = 1;

    while (i <= nonZeroA && j <= nonZeroB)
    {
        if (A[i][0] == B[j][0] &&
            A[i][1] == B[j][1])
        {
            int sum = A[i][2] + B[j][2];

            if (sum != 0)
            {
                C[k][0] = A[i][0];
                C[k][1] = A[i][1];
                C[k][2] = sum;
                k++;
            }

            i++;
            j++;
        }
        else if (A[i][0] < B[j][0] ||
                 (A[i][0] == B[j][0] &&
                  A[i][1] < B[j][1]))
        {
            C[k][0] = A[i][0];
            C[k][1] = A[i][1];
            C[k][2] = A[i][2];

            i++;
            k++;
        }
        else
        {
            C[k][0] = B[j][0];
            C[k][1] = B[j][1];
            C[k][2] = B[j][2];

            j++;
            k++;
        }
    }

    while (i <= nonZeroA)
    {
        C[k][0] = A[i][0];
        C[k][1] = A[i][1];
        C[k][2] = A[i][2];

        i++;
        k++;
    }

    while (j <= nonZeroB)
    {
        C[k][0] = B[j][0];
        C[k][1] = B[j][1];
        C[k][2] = B[j][2];

        j++;
        k++;
    }

    C[0][0] = rows;
    C[0][1] = cols;
    C[0][2] = k - 1;

    cout << "\nAddition:\n";

    for (int x = 0; x < k; x++)
    {
        cout << C[x][0] << " "
             << C[x][1] << " "
             << C[x][2] << endl;
    }

    return 0;
}