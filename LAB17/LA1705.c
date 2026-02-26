// Write a C program to perform addition of two matrices and display the result using 3rd matrix. Use a function ADDMATRIX

#include <stdio.h>

void ADDMATRIX(int rows, int cols, int arr1[rows][cols], int arr2[rows][cols]){
    int arr3[rows][cols];
    for (int i=0; i<rows; i++)
    for (int j=0; j<cols; j++)
    arr3[i][j] = arr1[i][j] + arr2[i][j];

    printf("Resultant Matrix:\n");
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main(){
    int arr1[3][3];
    printf("Enter matrix1: ");
    for (int i=0; i<3; i++)
    for (int j=0; j<3; j++)
    scanf("%d", &arr1[i][j]);

    int arr2[3][3];
    printf("Enter matrix2: ");
    for (int i=0; i<3; i++)
    for (int j=0; j<3; j++)
    scanf("%d", &arr2[i][j]);

    ADDMATRIX(3, 3, arr1, arr2);
    return 0;
}