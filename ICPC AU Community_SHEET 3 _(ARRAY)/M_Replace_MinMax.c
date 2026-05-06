#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int A[1005];

    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    int minIndex = 0, maxIndex = 0;

    // find min & max index
    for (int i = 1; i < N; i++) {
        if (A[i] < A[minIndex]) {
            minIndex = i;
        }
        if (A[i] > A[maxIndex]) {
            maxIndex = i;
        }
    }

    // swap
    int temp = A[minIndex];
    A[minIndex] = A[maxIndex];
    A[maxIndex] = temp;

    // print array
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}