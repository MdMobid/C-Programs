// WAP to find out reverse of a number.

#include <stdio.h>
int main() {
    int num, reversed = 0, remainder;

    // Input number from user
    printf("n = ");
    scanf("%d", &num);

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }

    // Output the reversed number
    printf("Reverse: %d\n", reversed);

    return 0;
}