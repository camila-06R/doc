/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    int num, esPrimo = 1;
    printf("Ingrese un número: ");
    scanf("%d", &num);
    
    if (num <= 1) {
        esPrimo = 0;
    } else {
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                esPrimo = 0;
                break;
            }
        }
    }

    if (esPrimo)
        printf("%d es un número primo\n", num);
    else
        printf("%d no es un número primo\n", num);
        
    return 0;
}
