#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int num, max;
    scanf("%d", &max);
    for (int i = 1; i < N; i++)
    {
        scanf("%d", &num);
        if (num > max)
        {
            max = num;
        }
    }

    printf("%d\n", max);
    return 0;
}
