// Write a C program to find the sum of only PRIME values in a 2-D array using a function PRIMESUM

#include <stdio.h>

int PRIMESUM(int rows, int cols, int arr[rows][cols]){
    int sum = 0;
    for (int i=0; i<rows; i++){
        for (int j=0; j<cols; j++){

            int num = arr[i][j];
            int prime = 0;

            if (num <= 1) continue;

            for (int k=2; k<=num/2; k++){
                if (num % k == 0){
                    prime = 1;
                    break;
                }
            }
            if (prime == 0) sum += num;
        }
    }
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

    printf("Sum of Prime Numbers = %d\n", PRIMESUM(rows, cols, arr));
    return 0;
}