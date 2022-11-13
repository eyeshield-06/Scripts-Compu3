#include <stdio.h>
int main(){
    int a, b;
    printf("Ingrese dos Numeros? ");
    scanf("%i %i", &a, &b);
    if(a%b == 0)
        printf("es divisible\n");
    else
        printf("No lo es\n");
    return 0;
}

