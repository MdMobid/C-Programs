// WAP to print the natural numbers from n to 1 (value of n is user input)

#include <stdio.h>
int main() {

    int n, i;
    printf("n = ");
    scanf("%d", &n);
    
    for (i = n; i >= 1; i--) {
        printf("%d ", i);
    }

    return 0;
}