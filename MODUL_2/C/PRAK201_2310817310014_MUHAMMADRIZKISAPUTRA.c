#include<stdio.h>

int main(){
    char Nama[100];
    char NIM[100];
    char Kelas_Paralel[100];
    char Tempat_Tanggal_Lahir[100];
    char Alamat[100];
    char Hobby[100];
    char No_HP[100];

   printf("Nama:");
   gets(Nama);

   printf("NIM:");
   gets(NIM);
   
   printf("Kelas Paralel:%n");
   gets(Kelas_Paralel);

   printf("Tempat/Tanggal Lahir:");
   gets(Tempat_Tanggal_Lahir);

   printf("Alamat:");
   gets(Alamat);

   printf("Hobby:");
   gets(Hobby);

   printf("No.HP:");
   gets(No_HP);

   printf("\n");
   printf("Nama :%s\n" ,Nama);
   printf("Nim :%s\n",NIM);
   printf("Kelas Paralel :%s\n",Kelas_Paralel);
   printf("Tempat/Tanggal Lahir :%s\n",Tempat_Tanggal_Lahir);
   printf("Alamat :%s\n",Alamat);
   printf("Hobby :%s\n",Hobby);
   printf("No.HP :%s\n",No_HP);


    return 0;
}