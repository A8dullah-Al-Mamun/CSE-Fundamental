#include <stdio.h>
#include<math.h>
#define PI 3.141592653
int main() {
    double R ;
    scanf("%lf",&R);
    double area ;
    area= PI*R*R;
    printf("%.9lf",area);
    return 0;
}