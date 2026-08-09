// Develop a menu-driven program to demonstrate:

// Create
// Display
// Insert
// Delete
// Linear Search
// Exit

arr = []

while True:
    print("\n--- MENU ---")
    print("1. CREATE")
    print("2. DISPLAY")
    print("3. INSERT")
    print("4. DELETE")
    print("5. LINEAR SEARCH")
    print("6. EXIT")

    choice = int(input("Enter choice: "))

    if choice == 1:
        n = int(input("Enter size: "))
        arr = list(map(int, input("Enter elements: ").split()))[:n]
        print("Array created.")

    elif choice == 2:
        print("Array:", arr)

    elif choice == 3:
        pos = int(input("Enter position: "))
        value = int(input("Enter value: "))
        arr.insert(pos, value)
        print("Array:", arr)

    elif choice == 4:
        pos = int(input("Enter position: "))
        if 0 <= pos < len(arr):
            arr.pop(pos)
            print("Array:", arr)
        else:
            print("Invalid position.")

    elif choice == 5:
        value = int(input("Enter element to search: "))
        if value in arr:
            print("Element found at index", arr.index(value))
        else:
            print("Element not found.")

    elif choice == 6:
        print("Program exited.")
        break

    else:
        print("Invalid choice.")