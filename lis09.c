#include <stdio.h>
#include <math.h>
int main(){
    float x = 3.22;
    printf("f(x | x=3.22) es %f\n", 3*pow(x, 4)-4*pow(x, 2)+3);
    return 0;
}
