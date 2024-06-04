/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int numero, factorial = 1, contador = 1;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    do {
        factorial *= contador;
        contador++;
    } while (contador <= numero);

    printf("El factorial es: %d\n", factorial);
    return 0;
}
