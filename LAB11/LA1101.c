// WAP to create an array that can store N integers and display the contents of the array

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
   
   printf("Array Contents are: ");
   for(int j=0; j<N; j++){
      printf("%d ", arr[j]);
   }
   printf("\n");
   return 0;
}
