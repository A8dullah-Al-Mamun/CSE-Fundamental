#include <stdio.h>
int main() {
    int N , year , months , days ;
    scanf("%d",&N);
    year = N / 365;
    N = N % 365;
    months = N / 30;
    N = N % 30;
    days = N;
    printf("%d years\n%d months\n%d days\n",year,months,days);
    
    return 0;
}