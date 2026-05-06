#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int A[105];
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }

        for (int i = 0; i < N; i++) {
            int mx = A[i];

            for (int j = i; j < N; j++) {
                if (A[j] > mx) {
                    mx = A[j];
                }
                printf("%d ", mx);
            }
        }

        printf("\n");
    }

    return 0;
}