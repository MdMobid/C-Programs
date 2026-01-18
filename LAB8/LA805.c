// WAP to print GCD and LCM of two numbers.

#include <stdio.h>
int main() {
    int num1, num2, gcd, lcm, temp1, temp2;

    printf("Enter two numbers: ");
    scanf("%d", &num1);
    scanf("%d", &num2);

    temp1 = num1;
    temp2 = num2;
    while (temp2 != 0) {
        int remainder = temp1 % temp2;
        temp1 = temp2;
        temp2 = remainder;
    }
    gcd = temp1;

    lcm = (num1 * num2) / gcd;

    printf("GCD = %d\n", gcd);
    printf("LCM = %d\n", lcm);

    return 0;
}
