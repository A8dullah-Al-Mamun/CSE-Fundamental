#include<stdio.h>
int main() 
{
    int a ;
    scanf("%d",&a);
   int n = a / 1000;
   if(n%2==0)
   {
    printf("EVEN");
   }
   else
   {
    printf("ODD");
   }
    return 0 ;
}