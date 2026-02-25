// Write a C program to determine the largest and smallest element of a 1D array
// Use functions LARGEST and SMALLEST for the given purpose

#include <stdio.h>

int LARGEST(int arr[], int len){
    int max = arr[0];
    for (int i = 0; i < len; i++){
        if (max < arr[i]){
            max = arr[i];
        }
    }
    return max;   
}

int SMALLEST(int arr[], int len){
    int min = arr[0];
    for (int i = 0; i < len; i++){
        if (min > arr[i]){
            min = arr[i];
        }
    }
    return min;   
}

int main(){
    int len;
    printf("Enter array size: ");
    scanf("%d", &len);

    int arr[len];
    printf("Enter elements of array: ");
    for (int i = 0; i < len; i++) scanf("%d", &arr[i]);
    
    int largest = LARGEST(arr, len);
    int smallest = SMALLEST(arr, len);
    printf("Largest element = %d\n", largest);
    printf("Smallest element = %d\n", smallest);

    return 0;
}