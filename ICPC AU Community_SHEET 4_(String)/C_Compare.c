#include <stdio.h>
#include <string.h>

int main() {
    char X[25], Y[25];

    scanf("%s %s", X, Y);

    if (strcmp(X, Y) <= 0)
        printf("%s", X);
    else
        printf("%s", Y);

    return 0;
}