// WAP to print all the even and odd numbers in an 1-D array

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

    printf("Even numbers:\n");
    for (int i=0; i<len; i++){
        if (arr[i] % 2 == 0)
        printf("%d ", arr[i]);
    }

    printf("\nOdd numbers:\n");
    for (int i=0; i<len; i++){
        if (arr[i] % 2 != 0)
        printf("%d ", arr[i]);
    }
    return 0;
}