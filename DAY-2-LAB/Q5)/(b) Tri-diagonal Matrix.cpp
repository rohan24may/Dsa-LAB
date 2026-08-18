#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter size of tri-diagonal matrix: ";
    cin >> n;

    int arr[3 * n - 2];

    cout << "Enter " << 3 * n - 2 << " elements: ";

    for (int i = 0; i < 3 * n - 2; i++)
    {
        cin >> arr[i];
    }

    int k = 0;

    cout << "Tri-diagonal Matrix:" << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i - j == 1 || i == j || j - i == 1)
                cout << arr[k++] << " ";
            else
                cout << "0 ";
        }

        cout << endl;
    }

    return 0;
}