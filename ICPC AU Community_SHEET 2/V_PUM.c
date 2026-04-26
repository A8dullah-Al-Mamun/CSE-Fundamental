#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int x = 1;

    for (int i = 0; i < n; i++) {
        printf("%d %d %d PUM\n", x, x + 1, x + 2);
        x += 4;
    }

    return 0;
}