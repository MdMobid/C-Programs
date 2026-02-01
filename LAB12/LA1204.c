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

    printf("Reverse Order:\n");
    for (int i=len-1; i>=0; i--){
        printf("%d ", arr[i]);
    }

    return 0;
}