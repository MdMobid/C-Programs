/*
WAP to display the grade system of KIIT University based on total marks
secured by a student in a semester. Use else..if ladder statement.
*/

#include <stdio.h>
int main() {

   int marks;

   printf("Enter total mark secured by a student : ");
   scanf("%d", &marks);

   if ( marks >= 90 && marks <= 100 ) {
      printf("Secured grade is : O\n");
   }
   else if ( marks >= 80 && marks <= 89 ) {
      printf("Secured grade is : E\n");
   }
   else if ( marks >= 70 && marks <= 79 ) {
      printf("Secured grade is : A\n");
   }
   else if ( marks >= 60 && marks <= 69 ) {
      printf("Secured grade is : B\n");
   }
   else if ( marks >= 50 && marks <= 59 ) {
      printf("Secured grade is : C\n");
   }
   else if ( marks >= 40 && marks <= 49 ) {
      printf("Secured grade is : D\n");
   }
   else {
      printf("Secured grade is : F\n");
   }
   
   return 0;
}
