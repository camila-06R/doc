/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int num, factorial = 1, i = 1;
    printf("Ingresa un número: ");
    scanf("%d", &num);

    while (i <= num) {
        factorial *= i;
        i++;
    }

    printf("El factorial de %d es: %d\n", num, factorial);
    return 0;
}