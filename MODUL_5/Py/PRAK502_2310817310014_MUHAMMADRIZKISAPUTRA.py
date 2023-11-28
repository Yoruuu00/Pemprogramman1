def hitung(nilai1, nilai2):
    return abs(nilai1 - nilai2)

def mutlak(angka):
    return abs(angka)

input_baris = input().split()
a, c, b, d = map(int, input_baris)

hasil = hitung(a, b) + hitung(c, d)
print(hasil)
