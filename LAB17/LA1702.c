// Write a C program to determine the sum of main diagonal elements of a 2-D array of size 3x3 using a function SUMDIAGONAL

#include <stdio.h>

int SUMDIAGONAL(int rows, int cols, int arr[rows][cols]){
    int sum = 0;
    for (int i=0; i<rows; i++)
    for (int j=0; j<cols; j++)
    if (i == j) sum += arr[i][j];
    return sum;
}

int main(){

    int arr[3][3];
    printf("Enter a 3x3 matrix: ");
    for (int i=0; i<3; i++)
    for (int j=0; j<3; j++)
    scanf("%d", &arr[i][j]);

    int sum = SUMDIAGONAL(3, 3, arr);
    printf("Sum of main diagonal elements = %d\n", sum);
    return 0;
}