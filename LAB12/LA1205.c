// Given an array arr[] of non-negative integers and an integer sum, find a subarray that adds to a given sum

#include <stdio.h>
int main(){
    int len;
    printf("Enter array size: ");
    scanf("%d", &len);

    int arr[len];
    printf("Enter the %d Numbers: ", len);
    for (int i = 0; i < len; i++){
        scanf("%d", &arr[i]);
    }

    int sum;
    printf("Enter Sum: ");
    scanf("%d", &sum);
    
    int start, end, found=0;
    for (int i = 0; i < len; i++){
       
       int sum2 = 0;
       start = i;
       
       for (int j = i; (sum2 < sum) && (j<len); j++){
          sum2 += arr[j];
          end = j;
       }
          
      if (sum2 == sum){
         found = 1;
         break;
      }
   }
   
   if (found == 1) printf("Sum found between and including indices %d and %d\n", start, end);
   else printf("no subarray was found\n");
   
   return 0;
}
