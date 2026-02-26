// Write a C program to determine the sum of elements of a 2-D array using a function ELESUM

#include <stdio.h>

int ELESUM(int rows, int cols, int arr[rows][cols]){
    int sum = 0;
    for (int i=0; i<rows; i++)
    for (int j=0; j<cols; j++)
    sum += arr[i][j];
    return sum;
}

int main(){
    int rows, cols;
    printf("Enter rows & cols: ");
    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];
    printf("Enter elements of array: ");
    for (int i=0; i<rows; i++)
    for (int j=0; j<cols; j++)
    scanf("%d", &arr[i][j]);

    int sum = ELESUM(rows, cols, arr);
    printf("Sum of elements = %d\n", sum);
    return 0;
}