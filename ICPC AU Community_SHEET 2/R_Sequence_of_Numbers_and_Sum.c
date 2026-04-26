#include <stdio.h>

int main() {
    int n, m;

    while (scanf("%d %d", &n, &m)) {

        if (n <= 0 || m <= 0) {
            break;
        }

        int start, end;

        if (n < m) {
            start = n;
            end = m;
        } else {
            start = m;
            end = n;
        }

        int sum = 0;

        for (int i = start; i <= end; i++) {
            printf("%d ", i);
            sum += i;
        }

        printf("sum =%d\n", sum);
    }

    return 0;
}