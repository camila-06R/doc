/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int n, i = 1;
    float a, r, producto = 1;

    printf("Ingrese el numero de terminos de la serie geometrica: ");
    scanf("%d", &n);

    printf("Ingrese el primer termino de la serie: ");
    scanf("%f", &a);

    printf("Ingrese la razon de la serie: ");
    scanf("%f", &r);

    do {
        producto *= a;
        a *= r;
        i++;
    } while (i <= n);

    printf("El producto de los primeros %d terminos de la serie es: %.2f\n", n, producto);

    return 0;
}