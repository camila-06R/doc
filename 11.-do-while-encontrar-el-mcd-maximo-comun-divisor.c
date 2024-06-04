/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int a, b, temp;
    printf("Ingrese dos numeros: ");
    scanf("%d %d", &a, &b);

    do {
        temp = a % b;
        a = b;
        b = temp;
    } while (b != 0);

    printf("El MCD es: %d\n", a);
    return 0;
}