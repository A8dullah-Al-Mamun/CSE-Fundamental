#include <stdio.h>

int main()
{
    float N;
    scanf("%f", &N);

    int int_N=(int)N;

    if(N==int_N)
    {
        printf("int %d\n",int_N);
    }
    else 
    {
        printf("float %d %.3f",int_N,N-int_N);
    }

    return 0;
}