// Write a C program to determine the second largest element of a 1-D array of using a function SECLARGEST.

#include <stdio.h>

int SECLARGEST(int arr[], int len){
    for (int i = 0; i<len-1; i++){
        for (int j=0; j<len-1; j++)
        if (arr[j] < arr[j+1]){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
    return arr[1];
}

int main(){
    int len;
    printf("Enter array size: ");
    scanf("%d", &len);

    int arr[len];
    printf("Enter elements of array: ");
    for (int i = 0; i < len; i++) scanf("%d", &arr[i]);
    
    int seclargest = SECLARGEST(arr, len);
    printf("Second Largest element = %d\n", seclargest);

    return 0;
}