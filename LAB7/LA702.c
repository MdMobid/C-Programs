// WAP to print the natural numbers from 1 to n (value of n is user input)

#include <stdio.h>
int main() {

    int n, i;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Natural numbers from 1 to %d are:\n", n);
    for(i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    return 0;
}