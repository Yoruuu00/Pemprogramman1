N = int(input("Masukkan bilangan: "))

for i in range(1, N+1, 2):
    print(i, end=" ")
print()

for i in range(N if N % 2 == 0 else N - 1, 1, -2):
    print(i, end=" ")
print()
