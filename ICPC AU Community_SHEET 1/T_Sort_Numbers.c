#include<stdio.h>
int main() {

    int a,b,c, big=0, mid=0, small=0;
    scanf("%d %d %d", &a, &b, &c);
    
    if(a>=b && a>=c) {
        big=a;
        if(b>=c) {
            mid=b;
            small=c;
        }
        else{
            mid=c;
            small=b;
        }
    }

     if(b>=a && b>=c) {
        big=b;
        if(a>=c) {
            mid=a;
            small=c;
        }
        else{
            mid=c;
            small=a;
        }
    }

     if(c>=b && c>=a) {
        big=c;
        if(a>=b) {
            mid=a;
            small=b;
        }
        else{
            mid=b;
            small=a;
        }
    }

    printf("%d\n%d\n%d\n\n", small, mid, big);
    printf("%d\n%d\n%d", a,b,c);

return 0;
}