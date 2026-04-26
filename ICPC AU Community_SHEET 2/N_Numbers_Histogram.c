#include <stdio.h>

int main() {
    char s;
    int n;

    scanf(" %c", &s);
    scanf("%d", &n);

    int x;

    for (int i = 0; i < n; i++) {
        scanf("%d", &x);

        for (int j = 0; j < x; j++) {
            printf("%c", s);
        }

        printf("\n");
    }

    return 0;
}