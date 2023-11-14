#include <stdio.h>

int main() {
    int N;
    printf("");
    scanf("%d", &N);

    printf("");
    for (int i = 1; i <= N; i += 2) {
        printf("%d ", i);
    }
    
    printf("\n");
    for (int i = 2; i <= N; i += 2) {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}
