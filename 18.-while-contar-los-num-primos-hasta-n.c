/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int esPrimo(int num) {
    int i = 2;
    if (num <= 1) return 0;
    while (i <= num / 2) {
        if (num % i == 0) return 0;
        i++;
    }
    return 1;
}

int main() {
    int n, contador = 0, i = 2;
    printf("Ingresa un número: ");
    scanf("%d", &n);

    while (i <= n) {
        if (esPrimo(i)) {
            contador++;
        }
        i++;
    }

    printf("Hay %d números primos desde 1 hasta %d\n", contador, n);
    return 0;
}