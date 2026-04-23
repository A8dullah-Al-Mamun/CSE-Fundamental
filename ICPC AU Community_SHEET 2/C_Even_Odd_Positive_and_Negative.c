#include <stdio.h>
int main()
{
    int n;
    int x;
    scanf("%d", &n);
    int count_even = 0, count_odd = 0, count_pos = 0, count_neg = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if (x % 2 == 0)
        {
            count_even++;
        }
        else
        {
            count_odd++;
        }
        if (x < 0)
        {
            count_neg++;
        }
        else if (x > 0)
        {
            count_pos++;
        }
    }
    printf("Even: %d\n", count_even);
    printf("Odd: %d\n", count_odd);
    printf("Positive: %d\n", count_pos);
    printf("Negative: %d\n", count_neg);
    return 0;
}