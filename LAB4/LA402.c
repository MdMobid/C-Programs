// WAP to convert a distance in meter entered through keyboard into its equivalent kilometer and meter as per the following format.

#include<stdio.h>
int main(){
   
   int meter, kilometer, remaining_meter;
   printf("Enter the distance in meter: ");
   scanf("%d", &meter);

   kilometer = meter / 1000;
   remaining_meter = meter % 1000;
   printf("%d Meters = %d Kilometers, %d Meters\n", meter, kilometer, remaining_meter);

   return 0;
}
