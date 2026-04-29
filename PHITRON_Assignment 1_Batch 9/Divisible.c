#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    if(N%3==0)
    {
        printf("YES");
    }
    else if(N%3!=0)
    {
        printf("NO");
    }
    else
    {
        printf("Wrong input");
    }
    
    return 0;
}
