// Develop a menu-driven program to demonstrate:

// Create
// Display
// Insert
// Delete
// Linear Search
// Exit

#include <iostream>
using namespace std;

int main() {

    int arr[100];
    int size = 0;

    while (true) {

        cout << "\n--- MENU ---\n";
        cout << "1. CREATE\n";
        cout << "2. DISPLAY\n";
        cout << "3. INSERT\n";
        cout << "4. DELETE\n";
        cout << "5. LINEAR SEARCH\n";
        cout << "6. EXIT\n";

        int choice;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {

            cout << "Enter size: ";
            cin >> size;

            cout << "Enter elements: ";
            for (int i = 0; i < size; i++) {
                cin >> arr[i];
            }

            cout << "Array created.";

        }

        else if (choice == 2) {

            cout << "Array: ";
            for (int i = 0; i < size; i++) {
                cout << arr[i] << " ";
            }

        }

        else if (choice == 3) {

            int pos, value;

            cout << "Enter position: ";
            cin >> pos;

            cout << "Enter value: ";
            cin >> value;

            for (int i = size; i > pos; i--) {
                arr[i] = arr[i - 1];
            }

            arr[pos] = value;
            size++;

            cout << "Array: ";
            for (int i = 0; i < size; i++) {
                cout << arr[i] << " ";
            }

        }

        else if (choice == 4) {

            int pos;

            cout << "Enter position: ";
            cin >> pos;

            if (pos >= 0 && pos < size) {

                for (int i = pos; i < size - 1; i++) {
                    arr[i] = arr[i + 1];
                }

                size--;

                cout << "Array: ";
                for (int i = 0; i < size; i++) {
                    cout << arr[i] << " ";
                }

            }
            else {
                cout << "Invalid position.";
            }

        }

        else if (choice == 5) {

            int value;
            bool found = false;

            cout << "Enter element to search: ";
            cin >> value;

            for (int i = 0; i < size; i++) {

                if (arr[i] == value) {
                    cout << "Element found at index " << i;
                    found = true;
                    break;
                }

            }

            if (!found) {
                cout << "Element not found.";
            }

        }

        else if (choice == 6) {

            cout << "Program exited.";
            break;

        }

        else {
            cout << "Invalid choice.";
        }
    }

    return 0;
}