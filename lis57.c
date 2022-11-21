#include <stdio.h>
#include <stdbool.h>
int main(){
    bool IsVocal(char x);
    char string[25];
    printf("Texto? ");
    scanf("%[^\n]s", string);
    int i = 0, temp = 0;
    while(string[i] != 0){
        if(IsVocal(string[i]))
            temp++;
        i++;
    }
    printf("Vocales: %i\n", temp);
    return 0;
}
bool IsVocal(char x){
    if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
        return true;
    else
        return false;
}
