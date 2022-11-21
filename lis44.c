#include <stdio.h>
int main(){
    void fun(int num, int length, int array[length]);
    void printer(int length, int array[length]);
    int Length(int num);
    int num, length;
    printf("Num? ");
    scanf("%i", &num);
    length = Length(num);
    int array[length];
    fun(num, length, array);
    printer(length, array);
    return 0;
}
int Length(int num){
    int i = 0, temp = 1;
    while(num/temp >= 1){
        i++;
        temp = temp * 10;
    }
    return i;
}
void fun(int num, int length, int array[length]){
    for(int i = 0; i < length; i++){
        array[i] = num % 10;
        num = num/10;
    }
}
void printer(int length, int array[length]){
    for(int i = length - 1; i >= 0; i--){
        switch(array[i]){
            case 0:
                printf("Cero ");
                break;
            case 1:
                printf("Uno ");
                break;
            case 2:
                printf("Dos ");
                break;
            case 3:
                printf("Tres ");
                break;
            case 4:
                printf("Cuatro ");
                break;
            case 5:
                printf("Cinco ");
                break;
            case 6:
                printf("Seis ");
                break;
            case 7:
                printf("Siete ");
                break;
            case 8:
                printf("Ocho ");
                break;
            case 9:
                printf("Nueve ");
                break;
            default:
                break;
        }
    }
    printf("\n");
}
