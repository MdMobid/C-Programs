// WAP to compute the sum of all elements in an array using pointer

#include <stdio.h>

void sum(int len, int arr[]){
    int add = 0;
    int *ptr = arr;
    for (int i=0; i<len; i++) {
        add += *(ptr + i);
    }
    printf("Sum of Elements: %d\n", add);
}

int main() {
    int len;
    printf("No. of Elements: ");
    scanf("%d", &len);

    int arr[len];
    printf("Enter %d elements: ", len);
    for (int i=0; i<len; i++) scanf("%d", &arr[i]);

    sum(len, arr);
    return 0;
}