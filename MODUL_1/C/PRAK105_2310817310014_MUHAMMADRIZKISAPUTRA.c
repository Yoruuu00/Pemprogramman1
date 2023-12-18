#include <stdio.h>

int main(){
    int a = 9;
    int b = 5;
    int x = 8;
    int y = 8;

    int hasilsisabagia_b = a%b;
    int hasilsisabagix_y = x%y;

    printf("variabel a bernilai %d\n",a);
    printf("variabel b bernilai %d\n",b);
    printf("variabel x bernilai %d\n",x);
    printf("variabel y bernilai %d\n",y);
    printf("Total sisa bagi dari a dibagi b dan x dibagi y adalah %d",hasilsisabagia_b + hasilsisabagix_y);

    return 0;
}