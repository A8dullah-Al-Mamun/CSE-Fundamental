#include <stdio.h>
int main() {
    int k, s;
    scanf("%d %d", &k, &s);
    long long count = 0;
    for (int x = 0; x <= k; x++) {
        for (int y = 0; y <= k; y++) {
            int z = s - (x + y);
            if (z >= 0 && z <= k) {
                count++;
            }
        }
    }
    printf("%lld\n", count);
    return 0;
}
