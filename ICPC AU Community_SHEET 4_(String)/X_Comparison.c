#include <stdio.h>
#include <string.h>

void sortString(char s[], int l, int r)
{
    for (int i = l; i <= r; i++)
    {
        for (int j = i + 1; j <= r; j++)
        {
            if (s[i] > s[j])
            {
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}

int main()
{
    char s[10005];
    scanf("%s", s);

    int n = strlen(s);

    // If string length is 1
    if (n == 1)
    {
        printf("%s\n", s);
        return 0;
    }

    char best[10005];

    // Initialize with a very large string
    strcpy(best, "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz");

    for (int split = 1; split < n; split++)
    {
        char temp[10005];

        strcpy(temp, s);

        // Sort first part
        sortString(temp, 0, split - 1);

        // Sort second part
        sortString(temp, split, n - 1);

        // Compare with current best
        if (strcmp(temp, best) < 0)
        {
            strcpy(best, temp);
        }
    }

    printf("%s\n", best);

    return 0;
}