// WAP to find the sum of all digits of a three-digit number. Number must be a user input.

#include<stdio.h>
int main(){
   
   int num, sum, digit1, digit2, digit3;
   printf("Enter a three-digit number: ");
   scanf("%d", &num);

   digit1 = num % 10;
   digit2 = (num / 10) % 10;
   digit3 = num / 100;
   
   sum = digit1 + digit2 + digit3;
   printf("The sum of the digits is: %d\n", sum);
   
   return 0;
}
