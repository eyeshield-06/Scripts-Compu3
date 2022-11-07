#include <stdio.h>
int main(){
    int question();
    int N;
    N = question();
    for(int i = 1; i <= N; i++){
        if(i == 1 || i == N){
            for(int I = 1; I <= N; I++){
                if(I == N)
                    printf("*\n");
                else
                    printf("* ");
            }
        }
        else {
            for(int I = 1; I <= (N*2-1); I++){
                if(I == 1)
                    printf("*");
                else if (I == (N*2-1))
                    printf("*\n");
                else{
                    printf(" ");
                }
            }
        }
    }
}
int question(){
    int N;
    printf("N?\n");
    scanf("%i", &N);
    return N;
}
