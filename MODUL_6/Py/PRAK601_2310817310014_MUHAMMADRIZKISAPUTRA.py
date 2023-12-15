baris, kolom = map(int, input().split())
elemen = list(map(int, input().split()))

for i in range(baris):
    for j in range(kolom):
        print(elemen[i * kolom + j], end=" ")
    print()
