/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int n, i = 1, j, factorial, suma_factoriales = 0;
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    do {
        factorial = 1;
        j = 1;
        do {
            factorial *= j;
            j++;
        } while (j <= i);
        suma_factoriales += factorial;
        i++;
    } while (i <= n);

    printf("La suma de los factoriales de los primeros %d numeros es: %d\n", n, suma_factoriales);
    return 0;
}
