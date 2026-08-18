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

    int low = 0;
    int high = n - 2;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == mid + 1)
        {
            // Everything is correct up to mid
            low = mid + 1;
        }
        else
        {
            // Missing number is at or before mid
            high = mid - 1;
        }
    }

    cout << "Missing number: " << low + 1;

    return 0;
}