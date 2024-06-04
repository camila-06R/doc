/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main() {
    int numero, raiz = 0;
    printf("Ingrese un número para calcular su raíz cúbica: ");
    scanf("%d", &numero);
    for (int i = 0; numero > 0; i++) {
        int cubo = 0;
        for (int j = 0; j < 3; j++) {
            cubo += (raiz + 1);
        }
        if (cubo > numero) break;
        numero -= cubo;
        raiz++;
    }
    printf("La raíz cúbica del número que ingreso es %d\n", raiz);
    return 0;
}

