#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        unsigned int n;
        scanf("%u", &n);
        int ones = 0;
        unsigned int temp = n;

        while (temp > 0) {
            if (temp % 2 == 1) {
                ones++;
            }
            temp /= 2;
        }
        unsigned int result = (1 << ones) - 1; 
        printf("%u\n", result);
    }

    return 0;
}
