/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int base, exponente, resultado = 1, contador = 0;
    printf("Ingresa la base: ");
    scanf("%d", &base);
    printf("Ingresa el exponente: ");
    scanf("%d", &exponente);

    while (contador < exponente) {
        int temp = resultado, suma = 0, i = 0;
        while (i < base) {
            suma += temp;
            i++;
        }
        resultado = suma;
        contador++;
    }

    printf("El resultado de %d^%d es: %d\n", base, exponente, resultado);
    return 0;
}