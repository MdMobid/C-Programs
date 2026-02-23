// WAP to design a user defined function to calculate the sum of the elements of an integer 1- D array

#include <stdio.h>

int add(int arr[], int len){
    int sum = 0;
    for (int i=0; i<len; i++) sum += arr[i];
    return sum;
}

int main(){
    int len;
    printf("Enter array size: ");
    scanf("%d", &len);

    int arr[len];
    printf("Enter elements of array: ");
    for (int i=0; i<len; i++) scanf("%d", &arr[i]);

    int sum = add(arr, len);
    printf("Sum of elements = %d\n", sum);
    return 0;
}