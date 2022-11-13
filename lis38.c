#include <stdio.h>
int main(){
    int factorial(int x);
    for(int i = 0; i < 10; i++)
        printf("%i --- %i\n", i, factorial(i));
}
int factorial(int x){
    if(x == 0)
        return 1;
    else
        return x*factorial(x-1);
}
