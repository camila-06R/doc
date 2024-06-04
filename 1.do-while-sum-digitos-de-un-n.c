/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int numero, suma = 0;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    do {
        suma += numero % 10;
        numero /= 10;
    } while (numero > 0);

    printf("La suma de los digitos es: %d\n", suma);
    return 0;
}