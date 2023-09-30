#include<stdio.h>

#include<math.h>

int main(){
    int alas = 5;
    int tinggi = 12;
    int sisi_miring_segitiga =sqrt(alas * alas + tinggi * tinggi);
    int kel_segitiga = alas + tinggi + sisi_miring_segitiga;
    int luas_segitiga = alas * tinggi / 2;
printf("diketahui : \n"); 
printf("alas = %d\ntinggi = %d\n\n",alas , tinggi);
printf("Jawab :\n sisi A = %d\n sisi B = %d\n sisi c = %d\n",alas ,sisi_miring_segitiga, tinggi);
printf("keliling = %d\n",kel_segitiga);
printf("Luas = %d",luas_segitiga);
    return 0;
}

