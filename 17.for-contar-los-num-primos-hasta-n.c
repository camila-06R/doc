/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    int n, count = 0;
    printf("Ingrese un número: ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i++) {
        int esPrimo = 1;
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                esPrimo = 0;
                break;
            }
        }
        if (esPrimo) {
            count++;
        }
    }
    printf("Hay %d números primos hasta %d\n", count, n);
    return 0;
}