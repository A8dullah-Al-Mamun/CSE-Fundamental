#include <stdio.h>
#include <limits.h>

int main() {
    int test;
    scanf("%d", &test);

    while (test--) {
        int size;
        scanf("%d", &size);

        int arr[100];

        for (int i = 0; i < size; i++) {
            scanf("%d", &arr[i]);
        }

        int smallest = INT_MAX;

        for (int i = 0; i < size; i++) {
            for (int j = i + 1; j < size; j++) {

                int result = arr[i] + arr[j] + (j - i);

                if (result < smallest) {
                    smallest = result;
                }
            }
        }

        printf("%d\n", smallest);
    }

    return 0;
}