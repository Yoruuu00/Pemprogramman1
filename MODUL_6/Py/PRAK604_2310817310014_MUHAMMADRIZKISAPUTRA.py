pesan1 = input("Masukkan kalimat 1: ")
pesan2 = input("Masukkan kalimat 2: ")

panjang_pesan1 = len(pesan1)
panjang_pesan2 = len(pesan2)

pesan1 = pesan1.rstrip('\n')
pesan2 = pesan2.rstrip('\n')

min_length = min(panjang_pesan1, panjang_pesan2)

karakter_cocok = 0
karakter_tidak_cocok = 0

if panjang_pesan1 == panjang_pesan2:
    for i in range(min_length):
        if pesan1[i] == ' ' and pesan2[i] == ' ':
            continue
        if pesan1[i] == pesan2[i]:
            print("*", end='')
            karakter_cocok += 1
        else:
            print("#", end='')
            karakter_tidak_cocok += 1

    print("\n* = {}".format(karakter_cocok))
    print("# = {}".format(karakter_tidak_cocok))

    if karakter_cocok >= karakter_tidak_cocok:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")

else:
    print("Panjang pesan berbeda, pesan palsu")