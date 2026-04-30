#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long a[n], x;

    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }

    scanf("%lld", &x);

    int pos = -1;

    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            pos = i;
            break;
        }
    }

    printf("%d\n", pos);

    return 0;
}