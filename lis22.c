#include <stdio.h>
int main(){
    int n;
    printf("Ingrese un Entero:\n#######################\n");
    scanf("%i", &n);
    for(int i = 1; i <= n; i++){
        if(i == n)
            printf("%i\n", i);
        else
            printf("%i + ", i);
    }
    return 0;
}
