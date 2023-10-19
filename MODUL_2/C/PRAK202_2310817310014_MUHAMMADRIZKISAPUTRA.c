#include <stdio.h>

int main(){
    float Nilai_pertama, Nilai_kedua;
    printf("Masukkan Nilai Pertama : ");
    scanf("%f", &Nilai_pertama);
    printf("Masukkan Nilai Kedua   : ");
    scanf("%f", &Nilai_kedua);
    float Hasil = Nilai_pertama + Nilai_kedua;

    printf("Hasil dari perjumlahan nilai pertama %g dan nilai kedua %.1f adalah %.2f",Nilai_pertama,Nilai_kedua,Hasil);
    return 0;
}