#include <stdio.h>

int main() {
    int panjang_sisi_segitiga_1 = 4;
    int panjang_sisi_segitiga_2 = 5;
    int panjang_sisi_segitiga_3 = 7;
    int pagar = 85000;
    int hasil = panjang_sisi_segitiga_3 + panjang_sisi_segitiga_2 + panjang_sisi_segitiga_1;
    int total = hasil * pagar;
    
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", panjang_sisi_segitiga_1, panjang_sisi_segitiga_2, panjang_sisi_segitiga_3);
    printf("Keliling Tanah Pak Dengklek adalah 16\n");
    printf("Harga tanah per meter adalah %d\n", pagar);
    printf("Jawaban:\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah: Rp %d\n", total);

    return 0;
}