/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    int n;
    double producto = 1.0;
    printf("Ingrese un número: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        producto *= 1.0 / i;
    }
    printf("El producto de la serie 1 * 1/2 * ... * 1/%d es %.6f\n", n, producto);
    return 0;
}