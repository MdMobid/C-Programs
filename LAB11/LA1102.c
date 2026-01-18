//  WAP to find out the sum of the N numbers stored in an array of integers.

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
   for(int j=0; j<N; j++){
      sum = sum + arr[j];
   }
   
   printf("Sum of the numbers stored in array: %d\n", sum);
   return 0;
}
