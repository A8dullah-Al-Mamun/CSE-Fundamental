#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    long long first = 0, second = 1, current;

    if (number == 1) {
        printf("0\n");
    } else if (number == 2) {
        printf("1\n");
    } else {
        for (int i = 3; i <= number; i++) {
            current = first + second;
            first = second;
            second = current;
        }
        printf("%lld\n", second);
    }

    return 0;
}