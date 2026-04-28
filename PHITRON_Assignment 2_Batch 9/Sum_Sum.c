#include <stdio.h>

int main()
{
    int N;
    int sum_pos = 0, sum_neg = 0;

    scanf("%d", &N);
    int arr[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < N; i++)
    {
        if (arr[i] > 0)
        {
            sum_pos += arr[i];
        }
        else if (arr[i] < 0)
        {
            sum_neg += arr[i];
        }
    }

    printf("%d %d", sum_pos, sum_neg);

    return 0;
}