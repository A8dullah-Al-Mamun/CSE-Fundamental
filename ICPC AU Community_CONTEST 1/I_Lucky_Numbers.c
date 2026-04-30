#include <stdio.h>
int main() {
    int a, b , duo , ones ;
    scanf("%d %d",&a,&b);
    duo = a/10 ;
    ones = a%10 ;
    if(duo%ones==0 || ones%duo==0)
    {
        printf("YES");
    }
    else if(duo%ones!=0 || ones%duo!=0)
    {
        printf("NO");
    }
    else
    return 0;
}