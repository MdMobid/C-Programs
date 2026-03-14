// WAP to display the array elements in ascending order.

#include <stdio.h>
int main(){
    int len;
    printf("Enter array size: ");
    scanf("%d", &len);

    int arr[len];
    printf("Enter the %d Numbers: ", len);
    for (int i=0; i<len; i++){
        scanf("%d", &arr[i]);
    }

    for (int i=0; i<len-1; i++){
        for (int j=0; j<len-1; j++){
            if (arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("The Numbers in ascending order are:\n");
    for (int i=0; i<len; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}