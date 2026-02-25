// Write a C program to swap the first and last element of a 1-D array of using a function SWAP.

#include <stdio.h>

void SWAP(int arr[], int len){
    printf("Entered Array: ");
    for (int i = 0; i < len; i++) printf("%d ", arr[i]);
    printf("\n");

    int temp = arr[0];
    arr[0] = arr[len-1];
    arr[len-1] = temp;

    printf("After Swapping: ");
    for (int i = 0; i < len; i++) printf("%d ", arr[i]);
    printf("\n");
}

int main(){
    int len;
    printf("Enter array size: ");
    scanf("%d", &len);

    int arr[len];
    printf("Enter elements of array: ");
    for (int i = 0; i < len; i++) scanf("%d", &arr[i]);
    
    SWAP(arr, len);
    return 0;
}