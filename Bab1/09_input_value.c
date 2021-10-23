/* Numerik dengan Input dari User */
#include <stdio.h>
int main()
{ /* Kamus */
    int a;
    float x;

    /* Program */
    printf("contoh membaca dan menulis, ketik nilai integer");
    scanf("%d", &a);
    printf("Nilai yang dibaca: %d \n", a);

    printf("contoh membaca dan menulis, ketik nilai float");
    scanf("%f", &x);
    printf("Nilai yang dibaca: %f \n", x);

    return 0;
}