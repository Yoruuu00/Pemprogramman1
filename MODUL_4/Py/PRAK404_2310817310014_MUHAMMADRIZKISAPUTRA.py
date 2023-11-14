while True:
    print("\nPilih Program")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")

    Pilihancara = int(input("Masukkan Pilihan : "))

    if Pilihancara == 5:
        print("Terimakasih, telah menggunakan kalkulator Muhammad Rizki Saputra\n\n")
        break

    if Pilihancara == 13:
        print("Input anda salah, silahkan coba lagi\n")
        continue

    NilaiPertama = float(input("Masukkan Nilai Pertama : "))
    NilaiKedua = float(input("Masukkan Nilai Kedua : "))

    if Pilihancara == 1:
        Hasil = NilaiPertama + NilaiKedua
        print(f"Hasil Penjumlahan antara {NilaiPertama:.2f} dengan {NilaiKedua:.2f} adalah {Hasil:.2f}")
    elif Pilihancara == 2:
        Hasil = NilaiPertama - NilaiKedua
        print(f"Hasil Pengurangan antara {NilaiPertama:.2f} dengan {NilaiKedua:.2f} adalah {Hasil:.2f}")
    elif Pilihancara == 3:
        Hasil = NilaiPertama * NilaiKedua
        print(f"Hasil Perkalian antara {NilaiPertama:.2f} dengan {NilaiKedua:.2f} adalah {Hasil:.2f}")
    elif Pilihancara == 4:
        if NilaiKedua != 0:
            Hasil = NilaiPertama / NilaiKedua
            print(f"Hasil Pembagian antara {NilaiPertama:.2f} dengan {NilaiKedua:.2f} adalah {Hasil:.2f}")
        else:
            print("Tidak dapat melakukan pembagian dengan nol.")
    else:
        print("Input anda salah, silahkan coba lagi")
