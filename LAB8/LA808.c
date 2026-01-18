// WAP to display this series (3 in a single loop)

#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c = 1, next;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%d ", a);
            continue;
        }
        if (i == 2) {
            printf("%d ", b);
            continue;
        }
        if (i == 3) {
            printf("%d ", c);
            continue;
        }
        
        next = a + b + c;
        a = b;
        b = c;
        c = next;
        
        printf("%d ", next);
    }
    printf("\n");

    return 0;
}
