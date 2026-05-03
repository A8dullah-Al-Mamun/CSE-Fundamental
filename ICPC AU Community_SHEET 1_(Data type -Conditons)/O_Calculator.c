#include <stdio.h>
int main() {
    long long int a,b;
    char s;
    scanf("%lld%c%lld",&a,&s,&b);
    long long int sum , sub , mul , div ;
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    if(s=='+')
    {
        printf("%lld",sum);
    }
     else if(s=='-')
    {
        printf("%lld",sub);
    }
     if(s=='*')
    {
        printf("%lld",mul);
    }
     if(s=='/')
    {
        printf("%lld",div);
    }
    return 0;
}
