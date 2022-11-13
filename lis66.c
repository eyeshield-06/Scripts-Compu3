#include <stdio.h>
int main(){
    void printer(int mat[5][5]);
    int mat[5][5];
    for(int i = 0; i < 5; i++){
        for(int j =0; j < 5; j++){
            if(i == j)
                mat[i][j] = 1;
            else
                mat[i][j] = 0;
        }
    }
    printer(mat);
    return 0;
}
void printer(int mat[5][5]){
    for(int i = 0; i < 5; i++){
        for(int I = 0; I < 5; I++){
            if(I == 4)
                printf("%i\n", mat[i][I]);
            else
                printf("%i ", mat[i][I]);
        }
    }
}
