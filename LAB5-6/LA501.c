// WAP to find the largest between two numbers

#include <stdio.h>
int main(){
   
   int num1, num2;
   
   printf("Enter Two Numbers :\n");
   scanf("%d", &num1);
   scanf("%d", &num2);
   
   if (num1 > num2) {
      printf("The largest number is : %d\n", num1);
   } else {
      printf("The largest number is : %d\n", num2);
   }
}
