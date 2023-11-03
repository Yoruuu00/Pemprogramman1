#include<stdio.h>

int main(){
    int a;
    printf("");
    scanf("%d", &a);

    
    if (a > 0) {
        printf("Positif");
    } else if (a < 0) {
        printf("Negatif");
    } else{
        printf("nol");
    }

    return 0;
}