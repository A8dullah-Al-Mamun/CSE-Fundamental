#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    char S[25];
    scanf("%s", S);

    int ok = 1;

    if (S[A] != '-') {
        ok = 0;
    }

    for (int i = 0; S[i] != '\0'; i++) {
        if (i == A) continue;

        if (S[i] < '0' || S[i] > '9') {
            ok = 0;
        }
    }

    if (ok) printf("Yes");
    else printf("No");

    return 0;
}