#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int A[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    int palindrome = 1;

    for (int i = 0; i < N / 2; i++) {
        if (A[i] != A[N - 1 - i]) {
            palindrome = 0;
            break;
        }
    }

    if (palindrome) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}