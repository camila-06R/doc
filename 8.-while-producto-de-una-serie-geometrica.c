/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int n, base, producto = 1, i = 1;
    printf("Ingresa el número de términos: ");
    scanf("%d", &n);
    printf("Ingresa la base de la serie geométrica: ");
    scanf("%d", &base);

    while (i <= n) {
        producto *= base;
        i++;
    }

    printf("El producto de la serie geométrica es: %d\n", producto);
    return 0;
}