#include <stdio.h>
int main(){
    char string[] = "Hola como estamos";
    int i = 0;
    while(string[i] != 0){
        i++;
    }
    printf("Longitud: %i\n", i);
    for(int j = i - 1; j >= 0; j--)
        printf("%c", string[j]);
    printf("\n");
    return 0;
}
