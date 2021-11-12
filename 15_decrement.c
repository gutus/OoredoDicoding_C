/* Decrement Operation */

#include <stdio.h>
int main()
{
    /* Kamus */
    int i;
    /* Program */
    i = 3;
    printf("Nilai i :%d %d\n", i, i++);
    printf("Nilai i yang baru menjadi %d\n", i);
    printf("Dengan Decrement --1 nilai %d akan dikurangi 1\n", i);
    printf("Nilai i menjadi %d\n", --i); /* nilai awal dikurangi 1 */

    return 0;
}