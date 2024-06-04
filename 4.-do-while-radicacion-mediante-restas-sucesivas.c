/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int numero, cubo;
    printf("Ingrese un número: ");
    scanf("%d", &numero);

    int raizCubica = 0;
    cubo = 0;

    do {
        raizCubica++;
        cubo = raizCubica * raizCubica * raizCubica;
    } while (cubo <= numero);

    raizCubica--;

    printf("La raíz cúbica  de %d es %d\n", numero, raizCubica);

    return 0;
}
