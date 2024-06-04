/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main() {
    int num, count = 0;
    printf("Ingrese un número: ");
    scanf("%d", &num);
    for (int n = num; n > 0; n /= 10) {
        count++;
    }
    printf("El número %d tiene %d dígitos\n", num, count);
    return 0;
}
