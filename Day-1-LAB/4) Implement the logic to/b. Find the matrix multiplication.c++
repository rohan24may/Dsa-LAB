// b. Find the matrix multiplication

r1 = int(input("Rows of first matrix: "))
c1 = int(input("Columns of first matrix: "))
A = [list(map(int, input().split())) for _ in range(r1)]

r2 = int(input("Rows of second matrix: "))
c2 = int(input("Columns of second matrix: "))
B = [list(map(int, input().split())) for _ in range(r2)]

if c1 != r2:
    print("Matrix multiplication not possible.")
else:
    C = [[0] * c2 for _ in range(r1)]

    for i in range(r1):
        for j in range(c2):
            for k in range(c1):
                C[i][j] += A[i][k] * B[k][j]

    print("Result:")
    for row in C:
        print(*row)