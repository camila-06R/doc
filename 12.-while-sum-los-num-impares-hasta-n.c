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
        if (i % 2 != 0) {
            suma += i;
        }
        i++;
    }

    printf("La suma de los números impares hasta %d es: %d\n", n, suma);
    return 0;
}