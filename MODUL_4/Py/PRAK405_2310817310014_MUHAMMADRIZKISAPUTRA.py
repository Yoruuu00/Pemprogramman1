n, Kelipatan = map(int, input("Masukkan nilai n dan kelipatan: ").split())
Baris = 0

for i in range(1, n+1):
    Totalbaris = 0

    for j in range(i, 0, -1):
        Totalbaris += j * Kelipatan

        print(f"({j} * {Kelipatan})", end="")
        if j > 1:
            print(" + ", end="")

    print(f" = {Totalbaris}")
    Baris += Totalbaris

print(Baris)
