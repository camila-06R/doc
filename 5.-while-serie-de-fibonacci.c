/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int n, a = 0, b = 1, i = 0;
    printf("Ingresa el número de términos de la serie Fibonacci: ");
    scanf("%d", &n);

    while (i < n) {
        printf("%d ", a);
        int temp = a + b;
        a = b;
        b = temp;
        i++;
    }

    printf("\n");
    return 0;
}