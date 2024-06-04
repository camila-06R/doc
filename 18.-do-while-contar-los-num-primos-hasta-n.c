/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int n, i, j, es_primo, contador_primos = 0;
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);
    
    i = 2;
    do {
        es_primo = 1;  // Suponemos que el número es primo
        j = 2;
        do {
            if (i % j == 0 && i != j) {
                es_primo = 0;  // Encontramos un divisor, el número no es primo
                break;
            }
            j++;
        } while (j <= i / 2);
        
        if (es_primo) {
            contador_primos++;
        }
        i++;
    } while (i <= n);

    printf("Hay %d numeros primos hasta %d\n", contador_primos, n);
    return 0;
}
