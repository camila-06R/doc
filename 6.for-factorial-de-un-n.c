/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main() {
    int num, factorial = 1;
    printf("Ingrese un número para calcular su factorial: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }
    printf("El factorial de %d es %d\n", num, factorial);
    return 0;
}
