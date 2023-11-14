#include <stdio.h>

int main() {
    int Pilihancara;
    float Hasil, NilaiPertama, NilaiKedua;

    while (1) {
        printf("\nPilih Program \n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");

        printf("Masukkan Pilihan : ");
        scanf("%d", &Pilihancara);

        if (Pilihancara == 5) {
            printf("Terimakasih, telah menggunakan kalkulator Muhammad Rizki Saputra\n\n");
            break;
        }

        if (Pilihancara == 13) {
            printf("Input anda salah, silahkan coba lagi\n");
            continue;
        }

        printf("Masukkan Nilai Pertama : ");
        scanf("%f", &NilaiPertama);

        printf("Masukkan Nilai Kedua : ");
        scanf("%f", &NilaiKedua);

        switch (Pilihancara) {
            case 1:
                Hasil = NilaiPertama + NilaiKedua;
                printf("Hasil Penjumlahan antara %.2f dengan %.2f adalah %.2f\n", NilaiPertama, NilaiKedua, Hasil);
                break;
            case 2:
                Hasil = NilaiPertama - NilaiKedua;
                printf("Hasil Pengurangan antara %.2f dengan %.2f adalah %.2f\n", NilaiPertama, NilaiKedua, Hasil);
                break;
            case 3:
                Hasil = NilaiPertama * NilaiKedua;
                printf("Hasil Perkalian antara %.2f dengan %.2f adalah %.2f\n", NilaiPertama, NilaiKedua, Hasil);
                break;
            case 4:
                if (NilaiKedua != 0) {
                    Hasil = NilaiPertama / NilaiKedua;
                    printf("Hasil Pembagian antara %.2f dengan %.2f adalah %.2f\n", NilaiPertama, NilaiKedua, Hasil);
                } else {
                    printf("Tidak dapat melakukan pembagian dengan nol.\n");
                }
                break;
            default:
                printf("Input anda salah, silahkan coba lagi\n");
                break;
        }
    }

    return 0;
}
