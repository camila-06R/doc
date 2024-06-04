/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int multiplicar(int a, int b) {
    int resultado = 0;
    for (int i = 0; i < b; i++) {
        resultado += a;
    }
    return resultado;
}
int potencia(int base, int exponente) {
    if (exponente == 0) {
        return 1; 
    }
    
    int resultado = base;
    for (int i = 1; i < exponente; i++) {
        resultado = multiplicar(resultado, base);
    }
    return resultado;
}

int main() {
    int base, exponente;

    printf("Ingrese la base: ");
    scanf("%d", &base);

    printf("Ingrese el exponente: ");
    scanf("%d", &exponente);

    int resultado = potencia(base, exponente);

    printf("%d^%d = %d\n", base, exponente, resultado);

    return 0;
}

