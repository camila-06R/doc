/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int numero, digitos = 0;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    do {
        numero /= 10;
        digitos++;
    } while (numero > 0);

    printf("El numero tiene %d digitos\n", digitos);
    return 0;
}