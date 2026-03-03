// WAP to find out the maximum element of an integer array by using recursion

#include <stdio.h>
int max(int arr[], int len);

int main(){
    int len;
    printf("Enter array size: ");
    scanf("%d", &len);

    int arr[len];
    printf("Enter array elements: ");
    for (int i=0; i<len; i++) scanf("%d", &arr[i]);

    printf("Max Element: %d\n", max(arr, len));
    return 0;
}

int max(int arr[], int len){
    if (len == 1){
        return arr[0];
    }
    
    int maxRest = max(arr, len-1);
    
    if (maxRest < arr[len-1]){
        return arr[len-1];
    } else {
        return maxRest;
    }
}