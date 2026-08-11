// a. Reverse the elements of an array

#include <iostream>
using namespace std;

int main() {

    int arr[100];
    int n;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int left = 0;
    int right = n - 1;

    while (left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;
    }

    cout << "Reversed array: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}