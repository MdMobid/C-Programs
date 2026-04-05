#include <stdio.h>

int main() {
    int i, j, k;
    int n = 9;

    // Upper part
    for (i = 1; i <= n; i++) {

        // spaces
        for (k = 1; k <= n - i; k++) {
            printf(" ");
        }

        // numbers
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        printf("\n");
    }

    // Lower part
    for (i = n - 1; i >= 1; i--) {

        // spaces
        for (k = 1; k <= n - i; k++) {
            printf(" ");
        }

        // numbers
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}