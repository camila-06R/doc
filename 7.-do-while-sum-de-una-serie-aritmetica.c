/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int n, suma = 0, contador = 1;
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    do {
        suma += contador;
        contador++;
    } while (contador <= n);

    printf("La suma de la serie es: %d\n", suma);
    return 0;
}