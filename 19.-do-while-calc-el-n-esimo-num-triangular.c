/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int n, numero_triangular = 0, contador = 1;
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    do {
        numero_triangular += contador;
        contador++;
    } while (contador <= n);

    printf("El numero triangular de %d es: %d\n", n, numero_triangular);
    return 0;
}