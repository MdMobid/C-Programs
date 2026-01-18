/*
WAP to print the pattern 
1
2 2
3 3 3
*/

#include <stdio.h>

int main() {
    int rows;

    printf("Enter Row Number: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}
