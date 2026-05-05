#include <stdio.h>

int main()
{
    long long l1, r1, l2, r2;
    scanf("%lld %lld %lld %lld", &l1, &r1, &l2, &r2);

    long long start;
    if (l1 > l2)
    {
        start = l1;
    }
    else
    {
        start = l2;
    }

    long long end;
    if (r1 < r2)
    {
        end = r1;
    }
    else
    {
        end = r2;
    }

    if (start <= end)
    {
        printf("%lld %lld\n", start, end);
    }
    else
    {
        printf("-1\n");
    }

    return 0;
}