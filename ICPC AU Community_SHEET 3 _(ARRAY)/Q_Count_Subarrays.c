#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        long long arr[105];

        for (int i = 0; i < n; i++) {
            scanf("%lld", &arr[i]);
        }

        long long count = 0;
        long long len = 1;

        for (int i = 1; i < n; i++) {
            if (arr[i] >= arr[i - 1]) {
                len++;
            } else {
                count += (len * (len + 1)) / 2;
                len = 1;
            }
        }

        count += (len * (len + 1)) / 2;

        printf("%lld\n", count);
    }

    return 0;
}