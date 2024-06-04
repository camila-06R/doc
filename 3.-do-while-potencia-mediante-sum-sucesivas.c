/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int base, exponente, resultado = 1, contador = 0;
    printf("Ingrese la base: ");
    scanf("%d", &base);
    printf("Ingrese el exponente: ");
    scanf("%d", &exponente);

    do {
        int suma = 0, i = 0;
        do {
            suma += base;
            i++;
        } while (i < resultado);
        resultado = suma;
        contador++;
    } while (contador < exponente - 1);

    printf("El resultado de la potencia es: %d\n", resultado);
    return 0;
}