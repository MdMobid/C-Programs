// WAP to Print all unique elements of an array

#include <stdio.h>
int main(){
    int len;
    printf("Enter array size: ");
    scanf("%d", &len);

    int arr[len];
    printf("Enter the %d Numbers: ", len);
    for (int i=0; i < len; i++){
        scanf("%d", &arr[i]);
    }

    printf("Unique Elements:\n");
    for (int i= 0; i<len; i++){
        int count = 0;
        for (int j = 0; j<len; j++){
            if (arr[i] == arr[j]){
                count = count + 1;
            }
        }
        if (count < 2){
            printf("%d ", arr[i]);
        }
    }
    return 0;
}