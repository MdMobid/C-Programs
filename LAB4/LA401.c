// WAP to convert given second into its equivalent hour, minute and second as per the following format.

#include<stdio.h>
int main(){
   
   int seconds;
   
   printf("Enter seconds: ");
   scanf("%d", &seconds);
   
   int hours = seconds / 3600;
   int minutes = (seconds % 3600) / 60;
   int remaining_seconds = (seconds % 3600) % 60;
   
   printf("%d Seconds = %d Hours , %d Minutes, %d Seconds\n", seconds, hours, minutes, remaining_seconds);
   
   return 0;
}
