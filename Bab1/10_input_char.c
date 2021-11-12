/* Karakter dengan Input dari User */
#include <stdio.h>
int main()
{ /* Kamus */
    char c;
    char cc;

    /* Program */
    printf("contoh membaca dan menulis, ketik satu karakter \n");
    scanf("%s", &c);
    printf("Nilai yang dibaca: %d\n", c);

    printf("contoh membaca dan menulis, ketik dua karakter \n");
    scanf("%c", &cc);
    printf("Nilai yang dibaca: %c\n", cc);

    return 0;
}