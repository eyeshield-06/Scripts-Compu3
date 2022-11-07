#include <stdio.h>
int main(){
    void negativos(int dim, float vec[dim]);
    void scan(int dim, float vec[dim]);
    int dim;
    printf("Dimension? ");
    scanf("%i", &dim);
    float vec[dim];
    scan(dim, vec);
    negativos(dim, vec);
    return 0;
}
void scan(int dim, float vec[dim]){
    for(int i = 0; i < dim; i++){
        printf("Pos %i: ", i);
        scanf("%f", &vec[i]);
    }
}
void negativos(int dim, float vec[dim]){
    printf("Negativos####\n");
    for(int i = 0; i < dim; i++){
        if(vec[i] < 0){
            if(i == dim - 1)
                printf("%.2f\n", vec[i]);
            else 
                printf("%.2f  ", vec[i]);
        }
    }
}

