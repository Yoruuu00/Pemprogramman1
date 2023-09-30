#include <stdio.h>

int main(){
    int jarak_lingkaran = 14;
    int putaran = 5;
    int keliling_taman = jarak_lingkaran * putaran;
    float phi = 3.14;
    float jari_jari = keliling_taman / (2 * phi);

    printf("diketahui :\nPak Dengklek mengelilingi taman = %d putaran \n",putaran);
    printf("jarak tempuh Pak Dengklek = %d km\n\n",jarak_lingkaran);
    printf("Jawaban :\n Jari-jari lingkaran taman yang dikelilingi Pak Dengklek adalah %.2fkm",jari_jari);

    return 0;

}