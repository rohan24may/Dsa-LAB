// Design the logic to remove duplicate elements from an array so that after deletion the array contains only unique elements.

arr = list(map(int, input("Enter elements: ").split()))

unique = []

for x in arr:
    if x not in unique:
        unique.append(x)

arr = unique

print("Array after removing duplicates:", arr)