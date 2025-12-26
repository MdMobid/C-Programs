/*
WAP to input any two integers, and provide a menu to the user to select any of the 
options as add, subtract, multiply, divide and display the result accordingly
*/

#include <stdio.h>
int main() {

  int num1, num2;
  char op;
  
  printf("Enter 2 Numbers :\n");
  scanf("%d", &num1);
  scanf("%d", &num2);
  
  printf("\nSelect the operation from the menu:\n");
  printf("A for Add\n");
  printf("S for Subtract\n");
  printf("M for Multiplication\n");
  printf("D for Division\n");
  
  // Note the space before %c
  // This skips the newline character from previous inputs
  scanf(" %c", &op);
  
  if (op == 'A' || op == 'a') {
     printf("The Sum is : %d\n", num1 + num2);
  }
  else if (op == 'S' || op == 's') {
     printf("The Difference is : %d\n", num1 - num2);
  }
  else if (op == 'M' || op == 'm') {
     printf("The product is : %d\n", num1 * num2);
  }
  else if (op == 'D' || op == 'd') {
  
     if (num2 != 0) {
        printf("The Quotient is : %.2f\n", (float)num1 / num2);
     } else {
        printf("Error: Division by zero is not allowed.\n");
     }
  }
  else {
     printf("Invalid selection! Please use A, S, M, or D.\n");
  }

  return 0;
}
