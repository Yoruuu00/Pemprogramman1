#include <stdio.h>

int main() {
    int N;
    printf("Masukkan bilangan: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

    for (int i = (N % 2 == 0) ? N : N - 1; i >= 2; i -= 2) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
