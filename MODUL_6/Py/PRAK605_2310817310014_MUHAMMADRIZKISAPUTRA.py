n = int(input())
print("Matriks A:")
A = [list(map(int, input().split())) for _ in range(n)]
print("Matriks B:")

B = [list(map(int, input().split())) for _ in range(n)]

hasil_matrix = [[0 for _ in range(n)] for _ in range(n)]
for i in range(n):
    for j in range(n):
        for k in range(n):
            hasil_matrix[i][j] += A[i][k] * B[k][j]

print("Matriks AXB:")
for baris in hasil_matrix:
    print(*baris)

