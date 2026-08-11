// 3) Design the logic of a program to rotate a 1-D array by K positions.
// e.g., for A = {1,2,3,4,5} and K = 2,
// left rotation is {3,4,5,1,2}
// and right rotation is {4,5,1,2,3}.

#include <iostream>
using namespace std;

int main() {

    int arr[100];
    int n, k;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter K: ";
    cin >> k;

    k %= n;

    cout << "Left rotation: ";
    for (int i = k; i < n; i++) {
        cout << arr[i] << " ";
    }

    for (int i = 0; i < k; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nRight rotation: ";

    for (int i = n - k; i < n; i++) {
        cout << arr[i] << " ";
    }

    for (int i = 0; i < n - k; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}