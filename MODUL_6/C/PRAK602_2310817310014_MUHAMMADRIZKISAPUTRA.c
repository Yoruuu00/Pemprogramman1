#include <stdio.h>

int main() {
    int jumlahRuangan;

    printf("");
    scanf("%d", &jumlahRuangan);

    int zetsuPutih[jumlahRuangan];

    printf("");
    for (int i = 0; i < jumlahRuangan; i++) {
        scanf("%d", &zetsuPutih[i]);
    }

    for (int i = 0; i < jumlahRuangan; i++) {
        zetsuPutih[i] *= (i + 1);
    }

    printf("");
    for (int i = 0; i < jumlahRuangan; i++) {
        printf("%d ", zetsuPutih[i]);
    }

    return 0;
}
