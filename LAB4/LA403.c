// WAP to find the sum of 1st and last of a six-digit number. Number must be a user input.

#include<stdio.h>
int main(){
   
   int num, first_digit, last_digit, sum;
   printf("Enter a six-digit number: ");
   scanf("%d", &num);

   last_digit = num % 10; // Extracting last digit
   first_digit = num / 100000; // Extracting first digit
   sum = first_digit + last_digit; // Calculating sum
   
   printf("Sum of first and last digit is: %d\n", sum);
   return 0;
}
