// Dynamically allocate the size of an array using calloc, insert elements into the array, then print the elements. Change the size of the array, get the new elements and print the array. Finally free the memory

#include <stdio.h>
#include <stdlib.h>

int main(){
    int len;
    printf("Enter Length: ");
    scanf("%d", &len);

    int* ptr = calloc(len, sizeof(int));
    printf("Memory successfully allocated using calloc\n");

    printf("Enter Elements: ");
    for(int i=0; i<len; i++){
        scanf("%d", ptr+i);
    }

    printf("Elements in the array: ");
    for(int i=0; i<len; i++){
        printf("%d ", *(ptr+i));
    }

    int nlen;
    printf("\nEnter New Length: ");
    scanf("%d", &nlen);

    ptr = realloc(ptr, nlen*sizeof(int));
    printf("Memory successfully allocated using realloc\n");

    printf("Enter New Elements: ");
    for(int i=0; i<nlen; i++){
        scanf("%d", ptr+i);
    }

    printf("New Elements in the array: ");
    for(int i=0; i<nlen; i++){
        printf("%d ", *(ptr+i));
    }
    return 0;
}