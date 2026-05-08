#include <stdio.h>
int main()
{
    char s[10001];
    int t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%s", s);
        int capital_letter = 0, small_letter = 0, digit = 0;
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                capital_letter++;
            }
            else if (s[i] >= 'a' && s[i] <= 'z')
            {        
                small_letter++;
            }
            else if (s[i] >= '0' && s[i] <= '9')
            {
                digit++;
            }
        }
        printf("%d %d %d\n", capital_letter, small_letter, digit);
    }



    
    return 0;
}