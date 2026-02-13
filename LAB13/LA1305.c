// WAP to check whether two matrices are equal or not
#include <stdio.h>

int main(){

    int rows;
    printf("Enter no. of rows: ");
    scanf("%d", &rows);

    int cols;
    printf("Enter no. of cols: ");
    scanf("%d", &cols);
    
    int A[rows][cols], B[rows][cols];
    printf("Enter elements of Matrix A\n");
    for(int i=0; i<rows; i++){
        for (int j=0; j<cols; j++){
            scanf("%d", &A[i][j]); 
        }
    }

    printf("Enter elements of Matrix B\n");
    for(int i=0; i<rows; i++){
        for (int j=0; j<cols; j++){
            scanf("%d", &B[i][j]);
        }
    }

    int flag = 0;
    for(int i=0; i<rows; i++){
        for (int j=0; j<cols; j++){
            if (A[i][j] != B[i][j]){
                flag = 1;
                break;
            }
        }
    }

    if (flag == 0) printf("Matrix A is equal to Matrix B");
    else printf("Matrix A is not equal to Matrix B");
}