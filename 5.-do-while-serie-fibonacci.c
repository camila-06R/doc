/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void) {
    int num;
    int x1 = 0;
    int x2 = 1;
    int x3;

    printf("Cantidad de elementos: ");
    scanf("%i", &num);
    printf("\nSerie de Fibonacci:\n");
    printf("%i, %i", x1, x2);

    int i = 2;
    do {
        x3 = x1 + x2;
        printf(", %i", x3);
        x1 = x2;
        x2 = x3;
        i++;
    } while (i < num);

    return 0;
}
