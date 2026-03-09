// WAP to sort an array using Pointer
#include <stdio.h>

void sort(int len, int arr[]) {
    int *ptr = arr;

    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (*(ptr + j) > *(ptr + j + 1)) {
                int temp = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = temp;
            }
        }
    }
    printf("After Sorting:\n");
    printf("Elements: ");
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int len;

    printf("No. of Elements: ");
    scanf("%d", &len);

    int arr[len];

    printf("Enter %d elements: ", len);
    for (int i = 0; i < len; i++)
        scanf("%d", &arr[i]);

    sort(len, arr);

    return 0;
}