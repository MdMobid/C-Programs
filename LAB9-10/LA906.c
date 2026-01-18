/*
WAP to print the following pattern 
1 3 7 15 31.......
*/

#include <stdio.h>
#include <math.h>

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        long long term = pow(2, i) - 1;
        printf("%lld ", term);
    }
    printf("\n");
    return 0;
}
