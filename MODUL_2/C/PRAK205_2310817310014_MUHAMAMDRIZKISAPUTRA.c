#include<stdio.h>
#include<math.h>

int main(){
    int a;
    int b;
    int c;
    int Luas;
    int Keliling;
    scanf("%d %d", &a,&b);
    c = sqrt(b*b-a*a);
    Keliling = a + b + c;
    Luas = (a * c) / 2;

    printf("Alas = %d cm\n",c);
    printf("Tinggi = %d cm\n",a);
    printf("Keliling = %d cm\n",Keliling);
    printf("Luas = %d cm^2",Luas);
    return 0;
}
