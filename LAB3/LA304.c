// WAP to clalculate are of a triangle who's base and height are user input

#include<stdio.h>
int main(){
   
   int b,h;
   
   printf("Enter the height of the triangle: ");
   scanf("%d",&h);
   
   printf("Enter the base of the triangle: ");
   scanf("%d",&b);
   
   printf("The area of the triangle is: %f \n", 0.5*b*h);
   return 0;
}
