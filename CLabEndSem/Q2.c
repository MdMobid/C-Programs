#include <stdio.h>

int main(){
    int len;
    printf("Enter array size: ");
    scanf("%d", &len);

    int arr[len];
    printf("Enter Array Elements: ");
    for (int i=0; i<len; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<len; i++){
        if (i == 0){
            if (arr[i] > arr[i+1]){
                printf("Peak Element Index: %d\n", i);
            }
        } else if (i == len-1){
            if (arr[i] > arr[i-1]){
                printf("Peak Element Index: %d\n", i);
            }
        } else {
            if (arr[i-1] < arr[i] && arr[i+1] < arr[i]){
                printf("Peak Element Index: %d\n", i);
            }
        }
    }
    return 0;
}