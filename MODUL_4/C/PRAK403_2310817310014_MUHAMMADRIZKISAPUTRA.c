#include <stdio.h>

int main() {
    int angka1, angka2;

    printf("Masukkan dua angka : ");
    scanf("%d %d", &angka1, &angka2);

    int waktu = (angka1 < angka2) ? 1 : -1;

    for (int i = angka1; i != angka2; i += waktu) {
        printf("%d %d - ", i, angka1 + angka2 - i);
    }

    printf("%d %d\n", angka2, angka1);

    return 0;
}
