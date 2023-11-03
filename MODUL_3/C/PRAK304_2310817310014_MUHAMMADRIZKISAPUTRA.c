#include<stdio.h>

int main(){

int a;
printf("");
scanf("%d", &a);

if (a >=1 && a <=10){
    printf("satuan");

}   else if (a==0){
    printf("Nol");

}   else if (a >=100){
    printf("Anda mengimput Melebihi Limit Bilangan");

}   else if (a >=20 && a <= 99){
    printf("Puluhan");

}   else {
    printf("Belasan");

}

   return 0;
}