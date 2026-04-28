#include <stdio.h>

int main() {
    int N ;
    scanf("%d",&N);
    int x ,v ;
    int arr[N];
    for(int i = 0 ; i < N ;i++ )
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d %d", &x, &v);
    for(int i=N-1 ; i>=0 ; i--)
    {
        if(x==i)
        {
            arr[i]=v ;
            
        }
        printf("%d ",arr[i]);
    }
    return 0;
}