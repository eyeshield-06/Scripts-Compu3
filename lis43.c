#include <stdio.h>
int main(){
    int a, b;
    printf("Ingrese dos Numeros? ");
    scanf("%i %i", &a, &b);
    float A = a, B = b;
    if(b == 0)
        printf("Indefinido\n");
    else
        printf("DIV: %.3f\n", A/B);
    return 0;
}
