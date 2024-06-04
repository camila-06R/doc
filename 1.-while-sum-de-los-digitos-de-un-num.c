/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    int num, sum = 0;
    printf("Ingresa un número: ");
    scanf("%d", &num);

    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }

    printf("La suma de los dígitos es: %d\n", sum);
    return 0;
}