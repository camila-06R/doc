/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int n, suma = 0, i = 1;
    printf("Ingresa un número: ");
    scanf("%d", &n);

    while (i <= n) {
        suma += i * i;
        i++;
    }

    printf("La suma de los cuadrados de los primeros %d números es: %d\n", n, suma);
    return 0;
}