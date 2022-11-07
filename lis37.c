#include <stdio.h>
int main(){
    for(int N = 5; N <= 50; N = N + 5)
        printf("%i\n", (N*N+N)/2);
    return 0;
}
