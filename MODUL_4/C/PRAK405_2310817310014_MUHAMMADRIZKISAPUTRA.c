#include <stdio.h>

int main() {
    int n, Kelipatan;
    int Baris = 0;

    printf("Masukkan nilai n dan kelipatan : ");
    scanf("%d %d", &n, &Kelipatan);

    for (int i = 1; i <= n; i++) {
        int Totalbaris= 0;

        for (int j = i; j > 0; j--) {
            Totalbaris += j * Kelipatan;

            printf("(%d * %d)", j, Kelipatan);
            if (j > 1) {
                printf(" + ");
            }
        }

        printf(" = %d\n", Totalbaris);
        Baris += Totalbaris;
    }

    printf("%d\n", Baris);

    return 0;
}
