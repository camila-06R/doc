/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    int n, t1 = 0, t2 = 1, siguiente;
    printf("Ingrese el número de términos de la serie de Fibonacci: ");
    scanf("%d", &n);
    printf("Serie de Fibonacci: ");
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%d ", t1);
            continue;
        }
        if (i == 2) {
            printf("%d ", t2);
            continue;
        }
        siguiente = t1 + t2;
        t1 = t2;
        t2 = siguiente;
        printf("%d ", siguiente);
    }
    printf("\n");
    return 0;
}