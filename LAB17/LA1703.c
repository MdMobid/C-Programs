// Write a C program to determine the largest and smallest element of a 2-D array. Use functions LARGEST and SMALLEST for the given purpose.

#include <stdio.h>

int LARGEST(int rows, int cols, int arr[rows][cols]){
    int max = arr[0][0];
    for (int i=0; i<rows; i++)
    for (int j=0; j<cols; j++)
    if (max < arr[i][j])
    max = arr[i][j];
    return max;
}


int SMALLEST(int rows, int cols, int arr[rows][cols]){
    int min = arr[0][0];
    for (int i=0; i<rows; i++)
    for (int j=0; j<cols; j++)
    if (min > arr[i][j])
    min = arr[i][j];
    return min;
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

    printf("Largest = %d\n", LARGEST(rows, cols, arr));
    printf("Smallest = %d\n", SMALLEST(rows, cols, arr));
    return 0;
}