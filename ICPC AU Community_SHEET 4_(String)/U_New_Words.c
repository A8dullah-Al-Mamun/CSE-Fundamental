#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main()
{
    char s[1000001];
 
    scanf("%s", s);
 
    int e = 0, g = 0, y = 0, p = 0, t = 0;
 
    for (int i = 0; s[i] != '\0'; i++)
    {
        char c = tolower(s[i]);
 
        if (c == 'e')
            e++;
        else if (c == 'g')
            g++;
        else if (c == 'y')
            y++;
        else if (c == 'p')
            p++;
        else if (c == 't')
            t++;
    }
 
    int min = e;
 
    if (g < min)
        min = g;
    if (y < min)
        min = y;
    if (p < min)
        min = p;
    if (t < min)
        min = t;
 
    printf("%d\n", min);
 
    return 0;
}