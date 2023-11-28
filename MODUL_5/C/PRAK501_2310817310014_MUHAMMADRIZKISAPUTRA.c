#include <stdio.h>

int MaxBilangan(int x, int y, int i, int j) {
    int maxBilangan = x;

    if (y > maxBilangan) {
        maxBilangan = y;
    }

    if (i > maxBilangan) {
        maxBilangan = i;
    }

    if (j > maxBilangan) {
        maxBilangan = j;
    }

    return maxBilangan;
}


int main() {
int a, b, c, d;

scanf("%d %d %d %d", &a, &b, &c, &d);
int hasil = MaxBilangan(a, b, c, d);

printf("%d", hasil);
return 0;
}