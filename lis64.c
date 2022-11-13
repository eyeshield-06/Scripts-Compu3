#include <stdio.h>
int temp = 1;
int main(){
    void scan(int mat[4][4]);
    void sum(int mat1[4][4], int mat2[4][4], int mat3[4][4]);
    void printer(int mat[4][4]);
    int mat1[4][4], mat2[4][4], mat3[4][4];
    scan(mat1);
    scan(mat2);
    sum(mat1, mat2, mat3);
    printer(mat3);
    return 0;
}
void scan(int mat[4][4]){
    printf("Scan Matrix %i\n#########\n", temp);
    temp++;
    for(int i = 0; i < 4; i++){
        printf("Fila %i = ", i+1);
        for(int I = 0; I < 4; I++){
            scanf("%i", &mat[i][I]);
        }
    }
}
void sum(int mat1[4][4], int mat2[4][4], int mat3[4][4]){
    for(int i = 0; i < 4; i++){
        for(int I = 0; I < 4; I++){
            mat3[i][I] = mat1[i][I] + mat2[i][I];
        }
    }
}
void printer(int mat[4][4]){
    for(int i = 0; i < 4; i++){
        for(int I = 0; I < 4; I++){
            if(I == 3)
                printf("%i\n", mat[i][I]);
            else
                printf("%i ", mat[i][I]);
        }
    }
}
