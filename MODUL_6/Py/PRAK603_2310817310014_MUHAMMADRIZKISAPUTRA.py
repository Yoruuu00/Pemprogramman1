n1, n2 = map(int, input("Masukkan nilai n1 dan n2: ").split())

if n1 != n2:
    print("Jumlah tidak sama")
else:
    angka = 0

    print("Masukkan angka  baris pertama:")
    baris1 = list(map(int, input().split()))

    print("Masukkan angka baris kedua:")
    baris2 = list(map(int, input().split()))

    print("Hasil output:")
    for i in range(n1):
        print(baris1[i] * baris2[i], end=" ")
    print()
