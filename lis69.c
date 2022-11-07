#include <stdio.h>
// Falta verificar si la multiplicacion
// es valida en primer lugar
int temp = 1;
int main(){
    void scan(int a, int b, float mat[a][b]);
    void product(int a, int b, int c, int d, float mat1[a][b], float mat2[c][d]);
    int a, b, c, d;
    printf("Ingrese dims matriz 1?");
    scanf("%i %i", &a, &b);
    printf("Ingrese dims matriz 2?");
    scanf("%i %i", &c, &d);
    float mat1[a][b], mat2[c][d];
    scan(a, b, mat1);
    scan(c, d, mat2);
    product(a, b, c, d, mat1, mat2);
    return 0;
     
}
void scan(int a, int b, float mat[a][b]){
    printf("#######\nMatriz %i\n #######\n", temp);
    temp++;
    for(int i = 0; i < a; i++){
        printf("F%i: ", i);
        for(int I = 0; I < b; I++)
            scanf("%f", &mat[i][I]);
    }
}
void product(int a, int b, int c, int d, float mat1[a][b], float mat2[c][d]){
    void printer(int a, int b, float mat[a][b]);
    float mat3[a][d];
    for(int i = 0; i < a; i++){
        for(int I = 0; I < d; I++){
            int temp = 0;
            for(int j = 0; j < c; j++){
                temp = temp + mat1[i][j]*mat2[j][I];
            }
            mat3[i][I] = temp;
        }
    }
    printer(a, d, mat3);
}
void printer(int a, int b, float mat[a][b]){
    for(int i = 0; i < a; i++){
        for(int I = 0; I < b; I++){
            if(I == b - 1){
                printf("%f\n", mat[i][I]);
                continue;
            }
            else
                printf("%f ", mat[i][I]);
        }
    }
}
