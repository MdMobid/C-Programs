//  WAP to find out the sum of the N numbers stored in an array of integers.

#include <stdio.h>
int main(){
   int N, num, index;
   printf("Enter no of elements: ");
   scanf("%d", &N);
   
   int arr[N];
   for(int i=0; i<N; i++){
      scanf("%d", &arr[i]);
   }
   
   printf("Enter the element to be inserted: ");
   scanf("%d", &num);
   
   printf("Enter the location: ");
   scanf("%d", &index);
   
   printf("The resultant array:\n");
   
   for(int j=0; j<N; j++){
      if (j == index-1){
         printf("%d ", num);
         printf("%d ", arr[j]);
      } else {
         printf("%d ", arr[j]);
      }
   }
   
   printf("\n");
   return 0;
}
