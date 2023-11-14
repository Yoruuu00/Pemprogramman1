angka1, angka2 = map(int, input("Masukkan dua angka: ").split())

waktu = 1 if angka1 < angka2 else -1

for i in range(angka1, angka2, waktu):
    print(f"{i} {angka1 + angka2 - i} - ", end='')

print(f"{angka2} {angka1}")
