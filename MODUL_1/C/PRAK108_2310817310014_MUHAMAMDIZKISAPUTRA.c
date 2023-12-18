#include <stdio.h>

int main(){
    float jarak_lingkaran = 14;
    int putaran = 5;
    float keliling_taman = jarak_lingkaran / putaran;
    float phi = 3.14;
    float jari_jari = keliling_taman / (2 * phi);

    printf("diketahui :\nPak Dengklek mengelilingi taman = %d putaran \n",putaran);
    printf("jarak tempuh Pak Dengklek = %.0f km\n\n",jarak_lingkaran);
    printf("Jawaban :\n Jari-jari lingkaran taman yang dikelilingi Pak Dengklek adalah %.2f km\n",jari_jari);

    return 0;

}