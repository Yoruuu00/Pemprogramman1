#include <stdio.h>

int main(){
    int pasukan_yz = 958730;
    int pahlawan_altar = 5;
    int pasukan_yang_dikalahkan = pasukan_yz / pahlawan_altar;
    printf("jumlah pasukan yang dibawa yz = %d\n",pasukan_yz);
    printf("Jumlah pahlawan = %d\n",pahlawan_altar);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d\n",pasukan_yang_dikalahkan);
    
    return 0;
}