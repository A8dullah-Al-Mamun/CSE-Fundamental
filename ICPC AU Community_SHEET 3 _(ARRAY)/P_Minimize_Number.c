#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long arr[200];

    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }

    int count = 0;

    while (1) {
        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 != 0) {
                printf("%d\n", count);
                return 0;
            }
        }

        for (int i = 0; i < n; i++) {
            arr[i] /= 2;
        }

        count++;
    }

    return 0;
}