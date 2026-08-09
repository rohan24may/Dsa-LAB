// c. Find the Transpose of a Matrix

r = int(input("Enter rows: "))
c = int(input("Enter columns: "))

matrix = [list(map(int, input().split())) for _ in range(r)]

transpose = [[matrix[j][i] for j in range(r)] for i in range(c)]

print("Transpose:")
for row in transpose:
    print(*row)