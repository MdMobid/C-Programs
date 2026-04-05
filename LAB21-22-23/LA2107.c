// WAP to compute the sum of all elements in an array using dynamic memory allocation

#include <stdio.h>
#include <stdlib.h>

int main(){
    int len;
    printf("Enter length of array: ");
    scanf("%d", &len);

    int* ptr = (int*) malloc(len*sizeof(int));
    int sum = 0;

    printf("Enter Elements: ");
    for (int i=0; i<len; i++){
        scanf("%d", ptr+i);
        sum += *(ptr+i);
    }
    
    printf("Sum = %d\n", sum);
    return 0;
}