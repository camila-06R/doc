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
    for (int i = 2; i <= n; i += 2) {
        suma += i;
    }
    printf("La suma de los números pares hasta %d es %d\n", n, suma);
    return 0;
}