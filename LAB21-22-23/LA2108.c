// WAP to find the largest element stored in an array of n elements by using dynamic memory allocation

#include <stdio.h>
#include <stdlib.h>

int main(){
    int len;
    printf("Enter Length: ");
    scanf("%d", &len);

    int* ptr = malloc(len*sizeof(int));
    
    printf("Enter Elements: ");
    for(int i=0; i<len; i++){
        scanf("%d", ptr+i);
    }

    int max = *ptr;
    for(int i=0; i<len; i++){
        if(max < *(ptr+i)){
            max = *(ptr+i);
        }
    }
    printf("Largest Element = %d\n", max);
    return 0;
}