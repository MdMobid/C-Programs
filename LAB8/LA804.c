// The first few numbers of the Lucas sequence which is a variation on the Fibonacci sequence are:

#include <stdio.h>
int main() {

    int n, first = 1, second = 3, next;
    printf("Enter number of Lucas numbers to be generated: ");
    scanf("%d", &n);
    printf("Lucas Series: ");
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            printf("%d ", first);
            continue;
        }
        if (i == 1) {
            printf("%d ", second);
            continue;
        }
        next = first + second;
        first = second;
        second = next;
        printf("%d ", next);
    }
    printf("\n");
    return 0;
}