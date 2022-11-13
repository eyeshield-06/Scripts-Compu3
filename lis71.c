#include <stdio.h>
#include <stdbool.h>
int main(){
    void scan(int dim, int mat[dim][dim]);
    bool IsTI(int dim, int mat[dim][dim]);
    int dim;
    printf("Ingrese Dimension: ");
    scanf("%i", &dim);
    int mat[dim][dim];
    scan(dim, mat);
    if(IsTI(dim, mat))
        printf("Es Triangular Inferior\n");
    else
        printf("No es Triangular Inferior\n");
    return 0;
}
void scan(int dim, int mat[dim][dim]){
    for(int i = 0; i < dim; i++){
        printf("Fila %i = ", i+1);
        for(int I = 0; I < dim; I++){
            scanf("%i", &mat[i][I]);
        }
    }
}
bool IsTI(int dim, int mat[dim][dim]){
    bool logic = true;
    for(int i = 1; i < dim; i++){
        for(int I = i - 1; I >= 0; I--){
            if(mat[I][i] != 0){
                logic = false;
                break;
            }
        }
        if(!logic){
            break;
        }
    }
    return logic;
}
