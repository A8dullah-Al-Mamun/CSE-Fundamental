#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);

        int a = (m1 * d) / (m1 + m2);   
        int b = d - a;

        printf("%d\n", b);
    }
    return 0;
}