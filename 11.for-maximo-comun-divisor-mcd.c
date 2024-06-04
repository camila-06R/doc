/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main() {
    int a, b, mcd = 1;
    printf("Ingrese dos números: ");
    scanf("%d %d", &a, &b);
    for (int i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            mcd = i;
        }
    }
    printf("El MCD de %d y %d es %d\n", a, b, mcd);
    return 0;
}
