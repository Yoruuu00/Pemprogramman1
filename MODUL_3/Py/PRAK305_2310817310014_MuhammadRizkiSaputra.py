DETIK = int(input(""))

HARI = DETIK // 86400
DETIK %= 86400

JAM = DETIK // 3600
DETIK %= 3600

MENIT = DETIK // 60
DETIK2 = DETIK % 60

hasil = f"{HARI} Hari " if HARI > 0 else ""
hasil += f"{JAM:02d}:{MENIT:02d}:{DETIK2:02d}"

print(hasil)
