#include <stdio.h>
 
 
 int main(){
     
     int a,b,menu,hasil;
     
     printf("====================== \n");
     printf("Kalkulator Sederhana Dengan Bahasa C \n");
     printf("======================\n\n");
     printf("Menu : \n\n");
     printf("\t1.Pertambahan\n");
     printf("\t2.Pengurangan \n");
     printf("\t3.Perkalian\n");
     printf("\t4.Pembagian\n");
     
     printf("\n\nMasukan Pilihan Menu : ");
     scanf("%d", &menu);
     printf("=======================\n\n");
     
   
     switch(menu){
         case 1:
         printf("\n 1.Penjumlahan : \n");
         //inputan Pertama
         printf("Masukan Bilangan Pertama :");
         scanf("%d" ,&a);
         //inputan Kedua
         printf("Masukan Bilangan Kedua :");
         scanf("%d",&b);
         //proses perhitungan pertambahan
         hasil = a + b;
         printf("=====================\n\n");
         //memanggil hasil
         printf("%d", hasil);
         break;
         
//CASE 2
             case 2:
         printf("\n 2. Pengurangan: \n");
         //inputan Pertama
         printf("Masukan Bilangan Pertama :");
         scanf("%d" ,&a);
         //inputan Kedua
         printf("Masukan Bilangan Kedua :");
         scanf("%d",&b);
         //proses perhitungan pengurangan
         hasil = a - b;
         printf("=====================\n\n");
         //memanggil hasil
         printf("%d", hasil);
         break;
         
//CASE 3
             case 3:
         printf("\n 3.Perkalian : \n");
         //inputan Pertama
         printf("Masukan Bilangan Pertama :");
         scanf("%d" ,&a);
         //inputan Kedua
         printf("Masukan Bilangan Kedua :");
         scanf("%d",&b);
         //proses perhitungan perkalian
         hasil = a * b;
         printf("=====================\n\n");
         //memanggil hasil
         printf("%d", hasil);
         break;

//CASE 4
             case 4:
         printf("\n 1.Pembagian: \n");
         //inputan Pertama
         printf("Masukan Bilangan Pertama :");
         scanf("%d" ,&a);
         //inputan Kedua
         printf("Masukan Bilangan Kedua :");
         scanf("%d",&b);
         //proses perhitungan pembagian
         hasil = a / b;
         printf("=====================\n\n");
         //memanggil hasil
         printf("%d", hasil);
         break;
         default:
         printf("Menu Operator Tidak ada  ");
         break;
     }
     return 0;
 }
 