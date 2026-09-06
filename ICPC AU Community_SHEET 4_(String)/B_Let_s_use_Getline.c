#include <stdio.h>

int main() {
    char s[1000005];
    fgets(s, sizeof(s), stdin);

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '\\') break;
        printf("%c", s[i]);
    }

    return 0;
}