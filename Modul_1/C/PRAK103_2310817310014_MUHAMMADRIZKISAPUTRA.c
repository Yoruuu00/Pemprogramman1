#include<stdio.h>

int main(){
    float a = 9;
    float b = 6;
    float x = 10;
    float y = 7;
    printf("variabel a bernilai %.f\n", a);
    printf("variabel b bernilai %.f\n", b);
    printf("variabel x bernilai %.f\n", x);
    printf("variabel y bernilai %.f\n", y);

    printf("Hasil dari a ditambah b dikali x dan dibagi y adalah %.2f\n",(a + b)* x / y);
    return 0;
}