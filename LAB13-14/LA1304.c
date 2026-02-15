// WAP to find the sum of elements of matrix in its upper triangle

#include <stdio.h>

int main(){
    int rows;
    printf("Enter no. of rows: ");
    scanf("%d", &rows);

    int cols;
    printf("Enter no. of cols: ");
    scanf("%d", &cols);

    int arr[rows][cols];
    printf("Enter values to the matrix:\n");
    for(int i=0; i<rows; i++){
      for (int j=0; j<cols; j++){
         printf("Element [%d][%d]: ", i, j);
         scanf("%d", &arr[i][j]); 
      }
    }
   
   int sum = 0;
   for(int i=0; i<rows; i++){
      for (int j=0; j<cols; j++){
        if (j < i) sum += arr[i][j];
      }
    }
   printf("Sum of upper triangular matrix: %d", sum);   
   return 0;
}
