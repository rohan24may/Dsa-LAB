// 5) Write a program to find sum of every row and every column in a two-dimensional
// array

r = int(input("Enter rows: "))
c = int(input("Enter columns: "))

matrix = [list(map(int, input().split())) for _ in range(r)]

for i in range(r):
    print("Sum of row", i + 1, "=", sum(matrix[i]))

for j in range(c):
    total = 0
    for i in range(r):
        total += matrix[i][j]
    print("Sum of column", j + 1, "=", total)