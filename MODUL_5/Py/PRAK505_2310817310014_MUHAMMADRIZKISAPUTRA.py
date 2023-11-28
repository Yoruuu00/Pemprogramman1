def biodata(tahun_lahir, nama, asal):
    tahun_sekarang = 2023
    umur = tahun_sekarang - tahun_lahir

    print(f"\nPerkenalkan Nama Saya : {nama}")
    print(f"Umur Saya : {umur}")
    print(f"Saya Adalah Angkatan : {tahun_sekarang}")
    print(f"Asal Saya dari : {asal}\n")

def main():
    tahun_lahir = int(input("Tahun lahir : "))
    nama = input("Namaku : ")
    asal = input("Asal : ")

    biodata(tahun_lahir, nama, asal)

main()
