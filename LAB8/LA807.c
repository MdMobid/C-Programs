/* 
WAP to test whether an inputted number is a strong number or not.
(A number is said to be Strong if sum of factorial of digits is equal to the original number)
*/

#include <stdio.h>
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    int fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, originalNum, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (num > 0) {
        digit = num % 10;
        sum = sum + factorial(digit);
        num = num / 10;
    }

    if (sum == originalNum)
        printf("%d is a Strong number\n", originalNum);
    else
        printf("%d is not a Strong number\n", originalNum);

    return 0;
}