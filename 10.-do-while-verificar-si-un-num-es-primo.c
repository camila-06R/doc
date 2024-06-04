/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int numero, i = 2, es_primo = 1;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    if (numero < 2) {
        es_primo = 0;
    } else {
        do {
            if (numero % i == 0) {
                es_primo = 0;
                break;
            }
            i++;
        } while (i <= numero / 2);
    }

    if (es_primo) {
        printf("%d es primo\n", numero);
    } else {
        printf("%d no es primo\n", numero);
    }
    return 0;
}