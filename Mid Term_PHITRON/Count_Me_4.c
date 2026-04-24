#include <stdio.h>
#include <string.h>

int main() {
    char s[10001];
    int alphabet[26] = {0};

    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i++) {
        alphabet[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (alphabet[i] > 0) {
            printf("%c - %d\n", i + 'a', alphabet[i]);
        }
    }

    return 0;
}