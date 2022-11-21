#include <stdio.h>
int temp = 1;
int main(){
    void scan(int mat[5][5]);
    void changes(int a, int b, int mat[5][5]);
    void printer(int mat[5][5]);
    int mat[5][5];
    scan(mat);
    int a, b;
    printf("Columnas a cambiar? ");
    scanf("%i %i", &a, &b);
    changes(a, b, mat);
    printer(mat);
    return 0;
}
void scan(int mat[5][5]){
    printf("Scan Matrix %i\n#########\n", temp);
    temp++;
    for(int i = 0; i < 5; i++){
        printf("Fila %i = ", i+1);
        for(int I = 0; I < 5; I++){
            scanf("%i", &mat[i][I]);
        }
    }
}
void changes(int a, int b, int mat[5][5]){
    for(int i = 0; i < 5; i++){
        int temp = mat[i][a];
        mat[i][a] = mat[i][b];
        mat[i][b] = temp;
    }
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
