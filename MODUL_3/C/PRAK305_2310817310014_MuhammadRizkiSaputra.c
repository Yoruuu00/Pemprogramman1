#include <stdio.h>

int main() {
    int DETIK;

    printf("");
    scanf("%d", &DETIK);

    int HARI = DETIK / 86400;
    DETIK %= 86400;

    int JAM = DETIK / 3600;
    DETIK %= 3600;

    int MENIT = DETIK / 60;
    int DETIK2 = DETIK % 60;

    if (HARI > 0) {
        printf("%d Hari ", HARI);
    }

    printf("%.2d:%.2d:%.2d\n", JAM, MENIT, DETIK2);

    return 0;
}
