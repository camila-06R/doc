/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int n, producto = 1, base;
    printf("Ingrese la base de la serie geometrica: ");
    scanf("%d", &base);
    printf("Ingrese el numero de terminos de la serie geometrica: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        producto *= base;
    }
    printf("El producto de los primeros %d terminos es %d\n", n, producto);
    return 0;
}
