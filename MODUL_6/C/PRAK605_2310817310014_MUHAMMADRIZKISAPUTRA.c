#include <stdio.h>

int main() {
    int n;

    printf("Masukkan ordo matriks: ");
    scanf("%d", &n);

    printf("Matriks A:\n");
    int A[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    printf("Matriks B:\n");
    int B[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &B[i][j]);

    printf("Matriks A x B:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int hasil = 0;
            for (int k = 0; k < n; k++) {
                hasil += A[i][k] * B[k][j];
            }
            printf("%d ", hasil);
        }
        printf("\n");
    }

    return 0;
}
