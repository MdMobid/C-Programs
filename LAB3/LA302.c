// WAP to find Fahrenheit for a given centigrade temperature

#include<stdio.h>
int main(){
   
   float C,F;
   
   printf("Enter the temperature in centigrade: ");
   scanf("%f",&C);
   
   F = (float)(C*9/5) + 32;
   
   printf("The Fahrenheit temperature is: %f \n", F);
   return 0;
}
