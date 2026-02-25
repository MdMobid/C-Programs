// WAP to sort the elements of a 1-D array in ascending order
// using a suitable user defined function

#include <stdio.h>

void sort(int arr[], int len){

    printf("Before Sorting: ");
    for (int i = 0; i < len; i++) printf("%d ", arr[i]);
    printf("\n");

    int temp;

    for (int i=0; i<len-1; i++){
        for (int j=0; j<len-1; j++){
            if (arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("After Sorting: ");
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
    
    sort(arr, len);
    return 0;
}
