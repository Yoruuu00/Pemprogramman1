#include <stdio.h>
#include <string.h>

int main() {
    char pesan1[1000], pesan2[1000];
    int i, panjang_pesan1, panjang_pesan2, karakter_cocok = 0, karakter_tidak_cocok = 0;

    printf("Masukkan kalimat 1: ");
    fgets(pesan1, sizeof(pesan1), stdin);

    printf("Masukkan kalimat 2: ");
    fgets(pesan2, sizeof(pesan2), stdin);

    pesan1[strcspn(pesan1, "\n")] = '\0';
    pesan2[strcspn(pesan2, "\n")] = '\0';

    panjang_pesan1 = strlen(pesan1);
    panjang_pesan2 = strlen(pesan2);

    int min_length = (panjang_pesan1 < panjang_pesan2) ? panjang_pesan1 : 
panjang_pesan2;

    if(panjang_pesan1 == panjang_pesan2) {
        for (i = 0; i < min_length; i++) {
            if (pesan1[i] == ' ' && pesan2[i] == ' ') {
                continue;
            }
            if (pesan1[i] == pesan2[i]) {
                printf("*");
                karakter_cocok++;
            } else {
                printf("#");
                karakter_tidak_cocok++;
            }
        }

        printf("\n* = %d", karakter_cocok);
        printf("\n# = %d", karakter_tidak_cocok);

        if (karakter_cocok >= karakter_tidak_cocok) {
            printf("\nPesan Asli");
        } else {
            printf("\nPesan Palsu");
        }        
    }

    else {
        printf("Panjang pesan berbeda, pesan palsu");
    }
    
    return 0;
}