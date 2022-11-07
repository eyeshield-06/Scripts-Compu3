#include <stdio.h>
int main(){
    void printer(int dim[2], int mat[dim[1]][dim[2]]);
    void alphax(int dim[2], int mat[dim[1]][dim[2]]);
    void scan(int dim[2], int mat[dim[1]][dim[2]]);
    int dim[2];
    printf("Dimension Matriz?\n");
    scanf("%i %i", &dim[1], &dim[2]);
    int mat[dim[1]][dim[2]];
    scan(dim, mat);
    alphax(dim, mat);
    printer(dim, mat);
}
void scan(int dim[2], int mat[dim[1]][dim[2]]){
    for(int i = 0; i < dim[1]; i++){
        printf("Fila %i = ", i+1);
        for(int I = 0; I < dim[2]; I++){
            scanf("%i", &mat[i][I]);
        }
    }
}
void alphax(int dim[2], int mat[dim[1]][dim[2]]){ 
    int alpha;
    printf("Escalar? ");
    scanf("%i", &alpha);
    for(int i = 0; i < dim[1]; i++){
        for(int I = 0; I < dim[2]; I++){
            mat[i][I] = mat[i][I]*alpha;
        }
    }
}
void printer(int dim[2], int mat[dim[1]][dim[2]]){
    for(int i = 0; i < dim[1]; i++){
        for(int I = 0; I < dim[2]; I++){
            if(I == dim[2]-1)
                printf("%i\n", mat[i][I]);
            else
                printf("%i ", mat[i][I]);
        }
    }
}
