#include <stdio.h>
#include <string.h>
 
int main() {
    char s[1000005];
    fgets(s, sizeof(s), stdin);
 
    int n = strlen(s);
    if (s[n-1] == '\n') s[n-1] = '\0'; 
 
    int start = 0;
    for (int i = 0; ; i++) {
        if (s[i] == ' ' || s[i] == '\0') {
        
            int l = start, r = i - 1;
            while (l < r) {
                char tmp = s[l];
                s[l] = s[r];
                s[r] = tmp;
                l++;
                r--;
            }
            if (s[i] == '\0') break;
            start = i + 1;
        }
    }
 
    printf("%s\n", s);
    return 0;
}