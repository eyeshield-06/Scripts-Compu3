#include <stdio.h>
int main(){
    int factorial(int x);
    int x;
    printf("Factorial de? ");
    scanf("%i", &x);
    printf("Result: %i\n", factorial(x));
}
int factorial(int x){
    if(x == 0)
        return 1;
    else
        return x*factorial(x-1);
}
