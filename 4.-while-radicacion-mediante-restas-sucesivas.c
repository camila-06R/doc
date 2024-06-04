/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int numero, resultado = 0, cubo = 0;
    printf("Ingresa un número: ");
    scanf("%d", &numero);

    while (cubo * cubo * cubo <= numero) {
        resultado = cubo;
        cubo++;
    }

    printf("La raíz cúbica aproximada de %d es: %d\n", numero, resultado);
    return 0;
}