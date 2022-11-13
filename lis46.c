#include <stdio.h>
#include <math.h>

int main(){
    int IsPal(int num);
    int num, aux;
    printf("Entero? ");
    scanf("%i", &num);
    aux = IsPal(num);
    if(num == aux)
        printf("Palindromo\n");
    return 0;
}
int IsPal(int num){
    int temp = 0; 
    do{
        temp = temp*10 + num%10;
        num = num/10;
    }while(num > 0);
    return temp;
}
