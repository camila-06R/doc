/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int n, i = 1;
    float producto = 1.0;
    printf("Ingresa un número: ");
    scanf("%d", &n);

    while (i <= n) {
        producto *= 1.0 / i;
        i++;
    }

    printf("El producto de la serie es: %.2f\n", producto);
    return 0;
}