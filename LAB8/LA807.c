/* 
WAP to test whether an inputted number is a strong number or not.
(A number is said to be Strong if sum of factorial of digits is equal to the original number)
*/

#include <stdio.h>

int main() {
    int num, originalNum, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (num > 0) {
        digit = num % 10;
        
        int fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }
        
        sum = sum + fact;
        num = num / 10;
    }

    if (sum == originalNum)
        printf("%d is a Strong number\n", originalNum);
    else
        printf("%d is not a Strong number\n", originalNum);

    return 0;
}
