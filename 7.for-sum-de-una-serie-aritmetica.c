/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main() {
    int n, sum = 0;

    
    printf("Ingrese el número de términos (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("La suma de los primeros %d términos de la serie aritmética es: %d\n", n, sum);

    return 0;
}

