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
        suma += i * i;
    }
    printf("La suma de los cuadrados de los primeros %d números es %d\n", n, suma);
    return 0;
}
