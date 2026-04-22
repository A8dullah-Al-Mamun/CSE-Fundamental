#include <stdio.h>
int main() {
    float x, p ;
    scanf("%f %f",&x,&p);
    int z=100-x;
    float y ;
    y = (p*100)/z ;
    printf("%.2f",y);
    return 0;
}