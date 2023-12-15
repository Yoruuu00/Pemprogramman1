#include <stdio.h>

int main() {
    int n1, n2;
    printf("Masukkan nilai n1 dan n2: ");
    scanf("%d %d", &n1, &n2);

    if (n1 != n2) {
        printf("Jumlah tidak sama\n");
    } else {
        int angka;

        printf("Masukkan angka baris pertama:\n");
        int hasil1[n1];
        for (int i = 0; i < n1; i++) {
            scanf("%d", &angka);
            hasil1[i] = angka;
        }

        printf("Masukkan angka baris kedua:\n");
        int hasil2[n2];
        for (int i = 0; i < n2; i++) {
            scanf("%d", &angka);
            hasil2[i] = angka;
        }

        printf("Hasil:\n");
        for (int i = 0; i < n1; i++) {
            printf("%d ", hasil1[i] * hasil2[i]);
        }
        printf("\n");
    }

    return 0;
}
