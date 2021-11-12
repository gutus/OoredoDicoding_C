/* Aritmatika Integer dan Float */
#include <stdio.h>
int main()
{ /* Kamus */
    int x = 5;
    int y = 8;
    /* Program */
    printf("Ini nilai x + y  : %d \n", x + y);
    printf("Ini nilai x - y  : %d \n", x - y);
    printf("Ini nilai x * y  : %d \n", x * y);
    printf("Ini nilai x / y  : %d \n", x / y);
    printf("Ini nilai y / x  : %d \n", y / x);
    printf("Ini nilai x mod  y  : %d \n", x % y);
    printf("Excerise 1 \n");
    printf("Ini nilai x + x + x  : %d \n", x + x + x);
    printf("Ini nilai x * x + x  : %d \n", x * x + x);
    printf("Ini nilai (((1+2)/(7*5)*8)-7)+9  : %5.2d \n", (((1 + 2) / (7 * 5) * 8) - 7) + 9);

    /* bandingkan dengan operasi pembagian bilangan riil */
    float a = 5, b = 8;
    printf("Ini nilai a / b  : %5.3f \n", a / b); /* %5.3f untuk 3 digit di belakang koma*/
    printf("Ini nilai b / a  : %5.2f \n", b / a); /* %5.2f untuk 32 digit di belakang koma*/

    return 0;
}