#include <stdio.h>
int main(){
    void scan(int dim, float vec[dim]);
    void mean(int dim, float vec[dim]);
    int dim;
    printf("Dim?: ");
    scanf("%i", &dim);
    float vec[dim];
    scan(dim, vec);
    mean(dim, vec);
    return 0;
}
void scan(int dim, float vec[dim]){
    for(int i = 0; i < dim; i++){
        printf("Pos %i: ", i);
        scanf("%f", &vec[i]);
    }
}
void mean(int dim, float vec[dim]){
    printf("\nPos: " );
    float temp = 0;
    float length = dim;
    for(int i = 0; i < dim; i++){
        temp = temp + vec[i];
    }
    printf("Mean: %f\n", temp/length);
}
