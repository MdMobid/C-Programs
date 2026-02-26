// WAP to reverse the array elements
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

    for (int i = 0; i < len/2; i++){
        int temp = arr[i];
        arr[i] = arr[len - 1 - i];
        arr[len - 1 - i] = temp;
    }

    printf("Reversed Array:\n");
    for (int i = 0; i < len; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}