// 3) Design the logic of a program to rotate a 1-D array by K positions.
// e.g., for A = {1,2,3,4,5} and K = 2, the left rotation is {3,4,5,1,2} and the right
// rotation is {4,5,1,2,3}.

arr = list(map(int, input("Enter elements: ").split()))
k = int(input("Enter K: "))

k %= len(arr)

left = arr[k:] + arr[:k]
right = arr[-k:] + arr[:-k]

print("Left rotation:", left)
print("Right rotation:", right)