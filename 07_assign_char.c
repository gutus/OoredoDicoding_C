/* Assign Character */
/* variabel bertype karakter  kode ASCII*/
#include <stdio.h>
int main()
{
    /* Kamus */
    char c = 65; /* Pada kode ASCII karakter 65 adalah huruf A*/
    char c1;

    /* Algoritma */
    /* penulisan karakter sebagai huruf */
    printf("karakter = %c\n", c);
    c1 = 'Z'; /* Variabel c1 diisi dengan huruf 'Z' */
    printf("Karakter = %c\n", c1);

    /* penulisan karakter */
    printf("Karakter dalam kode ASCII 'A' = %d\n", c);
    printf("Karakter sebagai huruf= %c\n", c);
    printf("Karakter dalam kode ASCII 'Z' = %d\n", c1); /*  Z dalam ASCII adalah karakter 90*/
    printf("Karakter sebagai huruf= %c\n", c1);
}