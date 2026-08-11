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

    int unique[100];
    int uniqueSize = 0;

    for (int i = 0; i < n; i++) {

        bool duplicate = false;

        for (int j = 0; j < uniqueSize; j++) {
            if (arr[i] == unique[j]) {
                duplicate = true;
                break;
            }
        }

        if (!duplicate) {
            unique[uniqueSize] = arr[i];
            uniqueSize++;
        }
    }

    cout << "Array after removing duplicates: ";

    for (int i = 0; i < uniqueSize; i++) {
        cout << unique[i] << " ";
    }

    return 0;
}