/* Assignment */
#include <stdio.h>
int main()
{ /*Kamus */
    int i;
    int count;
    /* Algoritma */
    i = 5;
    count = 0;

    printf("Ini adalah nilai adalah nilai i >> %d pertama \n ", i);
    i = i + 5;
    count = count + 1;
    printf("Ini adalah nilai adalah nilai i >> %d yang ke %d \n", i, count);
    i += 5;
    count += 1;
    printf("Ini adalah nilai adalah nilai i >> %d yang ke %d \n", i, count);
}