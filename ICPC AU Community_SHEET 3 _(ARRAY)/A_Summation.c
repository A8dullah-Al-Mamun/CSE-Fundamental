#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long a, sum = 0;

    for (int i = 0; i < n; i++) {
        scanf("%lld", &a);
        sum += a;
    }

    if (sum < 0) {
        sum = -sum;
    }

    printf("%lld\n", sum);

    return 0;
}