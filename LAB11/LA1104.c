//  WAP to find largest element stored in an array.

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
   
   int max = 0;
   int index;
   for(int j=0; j<N; j++){
      if (max > arr[j]){
         max = arr[j];
         index = j;
      }
   }
   
   printf("Largest element stored in an array: %d\n", arr[index]);
   return 0;
}
