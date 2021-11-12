/* IF untuk Mengevaluasi Nilai */
/* Membaca nilai integer Menuliskan nilainya jika nilainya positif */

#include <stdio.h>
int main()
{
    /* Kamus */
    int integer;
    /* Program */
    printf("Contoh IF satu kasus \n");
    printf("Ketikkan suatu nilai integer ");
    scanf("%d", &integer);
    if (integer >= 0)
    {
        printf("Nilai a positif %d \n", integer);
    }
    /* jika nilai a tidak positif maka program tidak melakukan apa-apa */
    return 0;
}