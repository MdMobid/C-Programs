// WAP to find out sum of series up to n terms: 1 + √2 + √3 + ... + √n

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += sqrt(i);
    }

    printf("The sum of series is %f\n", sum);
    return 0;
}
