#include <stdio.h>
int mat[5][5];
int main(){
    void ini();
    void printer();
    ini();
    printer();
    return 0;
}
void ini(){
    for(int i = 1; i <= 5; i++){
        for(int I = 1; I <= 5; I++){
            mat[i-1][I-1] = i + I;
        }
    }
}
void printer(){
    for(int i = 0; i < 5; i++){
        for(int I = 0; I < 5; I++){
            if(I == 4){
                printf("%i\n", mat[i][I]);
                continue;
            }
            printf("%i ", mat[i][I]);
        }  
    }                      
}
