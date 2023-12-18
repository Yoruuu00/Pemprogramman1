#include<stdio.h>

int main(){
    int a = 400000;
    int b = 350000;
    int Diskonsepatu_A = 13;
    int Diskonsepatu_B = 21;
    int HasildiskonA = a * Diskonsepatu_A / 100;
    int HasildiskonB = b * Diskonsepatu_B / 100;
    printf("Harga sepatu a bernilai %d\n",a);
    printf("Harga sepatu b bernilai %d\n",b);
    printf("Harga sepatu a bernilai 13%% sehingga harganya menjadi \n");
    printf("%d \n",a - HasildiskonA);
    printf("Harga sepatu b bernilai 21%% sehingga harganya menjadi \n");
    printf("%d \n",b - HasildiskonB);

    return 0;
    }
