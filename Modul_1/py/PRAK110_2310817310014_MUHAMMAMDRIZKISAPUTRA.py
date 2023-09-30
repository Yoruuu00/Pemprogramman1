alas = 12
tinggi = 5
sisi_miring_segitiga = int((alas ** 2 + tinggi ** 2) ** 0.5)
kel_segitiga = alas + tinggi + sisi_miring_segitiga
luas_segitiga = (alas * tinggi) // 2

print(f"Diketahui:\nAlas = {alas}\nTinggi = {tinggi}\n")
print(f"Jawab:")
print(f"Sisi A = {alas}")
print(f"Sisi B = {tinggi}")
print(f"Sisi C = {sisi_miring_segitiga}")
print(f"Keliling = {kel_segitiga}\nLuas = {luas_segitiga}")