#include <stdio.h>
int main(){
    void max(int vec[10]);
    void min(int vec[10]);
    void mean(int vec[10]);
    int vec[10];
    printf("Vector\n");
    for(int i = 0; i < 10; i++)
        scanf("%i", &vec[i]);
    max(vec);
    min(vec);
    mean(vec);
    return 0;
}
void max(int vec[10]){
    int relative_max = vec[0];
    for(int i = 1; i < 10; i++){
        if(relative_max < vec[i])
            relative_max = vec[i];
    }
    printf("max: %i\n", relative_max);
}
void min(int vec[10]){
    int relative_min = vec[0];
    for(int i = 1; i < 10; i++){
        if(relative_min > vec[i])
            relative_min = vec[i];
    }
    printf("min: %i\n", relative_min);
}
void mean(int vec[10]){
    float temp = 0;
    for(int i = 0; i < 10; i++)
        temp = temp + vec[i];
    printf("mean: %f\n", temp/10);
}
