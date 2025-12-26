// WAP to find out sum of digits of a number.

#include <stdio.h>
int main() {
    int number, sum = 0, digit;
    
    printf("n = ");
    scanf("%d", &number);
    
    while(number != 0) {
        digit = number % 10;       // Extract the last digit
        sum = sum + digit;         // Add it to sum
        // OR sum += digit;
        number = number / 10;      // Remove the last digit
        // OR number /= 10;
    }
    
    printf("Sum of the digits: %d\n", sum);
    
    return 0;
}