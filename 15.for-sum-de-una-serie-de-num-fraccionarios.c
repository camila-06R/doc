/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    int n;
    double suma = 0.0;

    printf("Introduce el valor de n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        suma += 1.0 / i;
    }
    printf("La suma de la serie es: %.6f\n", suma);

    return 0;
}