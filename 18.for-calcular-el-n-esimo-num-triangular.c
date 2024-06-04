/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    int n, triangular = 0;
    printf("Ingrese un número: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        triangular += i;
    }
    printf("El %d-ésimo número triangular es %d\n", n, triangular);
    return 0;
}