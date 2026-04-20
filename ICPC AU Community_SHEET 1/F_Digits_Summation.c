#include <stdio.h>
 
int main() {
    long long int N,M;
    scanf("%lld %lld",&N,&M);
    int sum ;
    int last_digit_N= N%10;
    int last_digit_M=M%10;
    sum=last_digit_M+last_digit_N;
    printf("%d",sum);
    return 0;
}