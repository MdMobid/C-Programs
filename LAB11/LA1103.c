//  WAP to find the average of N numbers using arrays.

#include <stdio.h>
int main(){
   int N;
   printf("Enter array size (N): ");
   scanf("%d", &N);
   
   int arr[N];
   for(int i=0; i<N; i++){
      printf("Enter number%d: ", i+1);
      scanf("%d", &arr[i]);
   }
   
   int sum = 0;
   float avg = 0;
   for(int j=0; j<N; j++){
      sum = sum + arr[j];
   }
   
   printf("Average of the numbers stored in array = %.2f\n", sum / (float)N);
   return 0;
}
