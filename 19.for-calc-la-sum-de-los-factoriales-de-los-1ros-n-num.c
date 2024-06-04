/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    int n, suma = 0;
    printf("Ingrese un número: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int factorial = 1;
        for (int j = 1; j <= i; j++) {
            factorial *= j;
        }
        suma += factorial;
    }
    printf("La suma de los factoriales de los primeros %d números es %d\n", n, suma);
    return 0;
}