/* IF untuk Mengevaluasi Nilai */
/* Membaca nilai integer Menuliskan nilainya jika nilainya > 15 */

#include <stdio.h>
int main()
{
    /* Kamus */
    int integer;
    /* Program */
    printf("Contoh IF satu kasus \n");
    printf("Ketikkan suatu nilai integer ");
    scanf("%d", &integer);
    if (integer >= 15)
    {
        printf("Nilai integer lebih dari 15 %d \n", integer);
    }
    /* jika nilai integer tkurang dari 15 maka program tidak melakukan apa-apa */
    return 0;
}