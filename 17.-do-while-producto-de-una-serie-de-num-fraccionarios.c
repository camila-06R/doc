/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int n, contador = 1;
    double producto = 1.0;
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    do {
        producto *= 1.0 / contador;
        contador++;
    } while (contador <= n);

    printf("El producto de la serie fraccionaria hasta 1/%d es: %lf\n", n, producto);
    return 0;
}