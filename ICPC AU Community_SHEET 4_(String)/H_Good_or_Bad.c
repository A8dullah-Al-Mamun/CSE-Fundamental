#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        char s[100005];
        scanf("%s", s);

        int found = 0;

        for (int i = 0; s[i + 2] != '\0'; i++)
        {
            if ((s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0') ||
                (s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '1'))
            {
                found = 1;
                break;
            }
        }

        if (found)
            printf("Good\n");
        else
            printf("Bad\n");
    }

    return 0;
}