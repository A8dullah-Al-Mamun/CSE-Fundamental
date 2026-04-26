#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int n;
        scanf("%d", &n);

        if (n == 0) {
            printf("0");
        } else {
            while (n > 0) {
                printf("%d", n % 10);
                n /= 10;

                if (n > 0) {
                    printf(" ");
                }
            }
        }

        printf("\n");
    }

    return 0;
}