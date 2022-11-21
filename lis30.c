#include <stdio.h>
#include <stdbool.h>
int main(){
    int IsPal(int num);
    int num, aux;
    bool negative = false;
    printf("Entero? ");
    scanf("%i", &num);
    if(num < 0){
        num = num*-1;
        negative = true;
    }
    aux = IsPal(num);
    if(negative)
        printf("%i-\n", aux);
    else
        printf("%i \n", aux);
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
