/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int num, i = 2;
    int isPrime = 1; 
    printf("Ingresa un número: ");
    scanf("%d", &num);
    while (num < 2 && isPrime == 1) {
        isPrime = 0; 
    }
    while (i <= num / 2 && isPrime == 1) {
        while (num % i == 0) {
            isPrime = 0;
        }
        i++;
    }
    while (isPrime == 1) {
        printf("%d es primo.\n", num);
        isPrime = -1; 
    }
    while (isPrime == 0) {
        printf("%d no es primo.\n", num);
        isPrime = -1; 
    }

    return 0;
}