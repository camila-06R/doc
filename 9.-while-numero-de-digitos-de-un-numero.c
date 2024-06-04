/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int num, digitos = 0;
    printf("Ingresa un número: ");
    scanf("%d", &num);

    while (num != 0) {
        digitos++;
        num /= 10;
    }

    printf("El número tiene %d dígitos\n", digitos);
    return 0;
}