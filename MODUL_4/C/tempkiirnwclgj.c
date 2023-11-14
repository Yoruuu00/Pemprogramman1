#include <stdio.h>

int main(){
    int a;
    char lambang;

    printf("");
    scanf("%d", &a);
    printf("");
    scanf("%c", &lambang);

     int angka = 1; 

    while (angka <= 50) {
        if (angka % a == 0) {
            printf("%c ", lambang);
        } else {
            printf("%d ", angka);
        }
        angka++;  
    }

    printf("\n");

    return 0;
}
