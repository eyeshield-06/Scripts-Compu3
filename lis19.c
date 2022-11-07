#include <stdio.h>
int main(){
    void scan(int vec[15]);
    int IsPar(int vec[15]);
    int vec[15];
    scan(vec);
    printf("Hay %i Pares", IsPar(vec));
    return 0;
}
void scan(int vec[15]){
    for(int i = 0; i < 15; i++){
        printf("Ingrese entero %i\n", i+1);
        scanf("%i\n", &vec[i]);
    }
}
int IsPar(int vec[15]){
    int temp = 0;
    for(int i = 0; i < 15; i++){
        if(vec[i] % 2 == 0 && vec[i] > 0)
            temp++;
    }
    return temp;
}
