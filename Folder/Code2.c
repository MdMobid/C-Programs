// Take input of 2 integers and print their sum

#include<stdio.h>

int main() {
    int a, b; // Declare two integer variables

    printf("Enter 1st No: "); // Prompt user for first number
    scanf("%d", &a); // Read first number from user

    printf("Enter 2nd No: "); // Prompt user for second number
    scanf("%d", &b); // Read second number from user

    printf("Sum = %d", a + b); // Calculate and print the sum of the two numbers
    return 0;
}