/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num, sum = 0, digit;
    
    printf(" Ingrese un número");
    scanf ("%d", &num);
    for (int n = num; n > 0; n /= 10 ){
        digit = n % 10;
        sum  += digit;
    }
    printf("La suma de los dígitos de %d es %d\n", num, sum);
    return 0;
}
