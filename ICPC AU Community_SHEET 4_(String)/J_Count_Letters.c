#include <stdio.h>

char s[10000001];
int count[26];

int main()
{
    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i++)
    {
        count[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0)
        {
            printf("%c : %d\n", i + 'a', count[i]);
        }
    }

    return 0;
}