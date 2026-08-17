#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter n: ";
    cin >> n;

    int arr[n - 1];

    cout << "Enter " << n - 1 << " elements: ";

    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }

    int expected = 1;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] != expected)
        {
            cout << "Missing number: " << expected;
            return 0;
        }

        expected++;
    }

    // If no number was missing in the middle
    cout << "Missing number: " << n;

    return 0;
}