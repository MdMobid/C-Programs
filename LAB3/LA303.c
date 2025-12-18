// WAP to perform to calculate area of a circle while taking radius as user input.

#include<stdio.h>
int main(){
   
   int r;
   
   printf("Enter the radius of the circle: ");
   scanf("%d",&r);
   
   printf("The area is: %f \n", 3.14*r*r);
   return 0;
}
