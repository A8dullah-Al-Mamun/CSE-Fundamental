#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);

    int arr[1000];

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int minimum = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < minimum) {
            minimum = arr[i];
        }
    }

    int count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] == minimum) {
            count++;
        }
    }

    if (count % 2 != 0) {
        printf("Lucky\n");
    } else {
        printf("Unlucky\n");
    }

    return 0;
}