#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter size of symmetric matrix: ";
    cin >> n;

    int arr[n * (n + 1) / 2];

    cout << "Enter lower triangular elements:" << endl;

    int k = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cin >> arr[k++];
        }
    }

    cout << "Symmetric Matrix:" << endl;

    k = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i >= j)
            {
                cout << arr[k++] << " ";
            }
            else
            {
                // Corresponding value from lower triangle
                cout << arr[j * (j + 1) / 2 + i] << " ";
            }
        }

        cout << endl;
    }

    return 0;
}