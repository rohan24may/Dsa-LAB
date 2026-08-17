#include <iostream>
using namespace std;

int main()
{
    int A[20][20] = {0};
    int B[20][20] = {0};
    int C[20][20] = {0};

    int rowsA, colsA;
    int rowsB, colsB;

    cout << "Enter rows and columns of A: ";
    cin >> rowsA >> colsA;

    cout << "Enter elements of A:\n";

    for (int i = 0; i < rowsA; i++)
    {
        for (int j = 0; j < colsA; j++)
        {
            cin >> A[i][j];
        }
    }

    cout << "Enter rows and columns of B: ";
    cin >> rowsB >> colsB;

    cout << "Enter elements of B:\n";

    for (int i = 0; i < rowsB; i++)
    {
        for (int j = 0; j < colsB; j++)
        {
            cin >> B[i][j];
        }
    }

    if (colsA != rowsB)
    {
        cout << "Matrix multiplication not possible.";

        return 0;
    }

    // Matrix multiplication
    for (int i = 0; i < rowsA; i++)
    {
        for (int j = 0; j < colsB; j++)
        {
            for (int k = 0; k < colsA; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Convert result to triplet
    int triplet[100][3];
    int count = 0;

    for (int i = 0; i < rowsA; i++)
    {
        for (int j = 0; j < colsB; j++)
        {
            if (C[i][j] != 0)
            {
                count++;

                triplet[count][0] = i;
                triplet[count][1] = j;
                triplet[count][2] = C[i][j];
            }
        }
    }

    triplet[0][0] = rowsA;
    triplet[0][1] = colsB;
    triplet[0][2] = count;

    cout << "\nMultiplication Result (Triplet):\n";

    for (int i = 0; i <= count; i++)
    {
        cout << triplet[i][0] << " "
             << triplet[i][1] << " "
             << triplet[i][2] << endl;
    }

    return 0;
}