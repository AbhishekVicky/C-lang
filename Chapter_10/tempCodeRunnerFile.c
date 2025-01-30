#include <stdio.h>

int main() {
    char str[] = "INFINITY";
    int i, j;

    for (i = 0; i < 8; i++) {
        for (j = 0; j < i + 1; j++) {
            printf("%c ", str[j]);
        }
        printf("\n");
    }

    return 0;
}