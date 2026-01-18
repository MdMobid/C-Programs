// WAP for a two dimensional to store and display the elements. (Store temperature of two cities for a week and display it)

#include <stdio.h>
int main(){
   int cities, days;
   
   printf("Enter no of Cities: ");
   scanf("%d", &cities);
   
   printf("Enter no of days: ");
   scanf("%d", &days);
   
   int arr[cities][days];
   
   for(int i=0; i<cities; i++){
      for (int j=0; j<days; j++){
         printf("City %d, Day %d = ", i+1, j+1);
         scanf("%d", &arr[i][j]);
      }
   }
   
   printf("Displaying values:\n");
   for(int i=0; i<cities; i++){
      for (int j=0; j<days; j++){
         printf("City %d, Day %d = %d\n", i+1, j+1, arr[i][j]);
      }
   }
   printf("\n");
}
