#include <stdio.h>
int main(){
    int vec[10];
    printf("Vector\n");
    for(int i = 0; i < 10; i++)
        scanf("%i", &vec[i]);
    printf("POSITIVOS:\n");
    for(int i = 0; i < 10; i++){
        if(vec[i] > 0)
            printf("%i\n", vec[i]);
    }
    return 0;
}
