// Write a C program to perform swapping of two integers using a function SWAP

#include<stdio.h>

void SWAP(int num1, int num2){
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("After Swapping \n num1 = %d \n num2 = %d \n", num1, num2);
}

int main(){
    int num1, num2;
    printf("Enter num1: ");
    scanf("%d", &num1);
    printf("Enter num2: ");
    scanf("%d", &num2);

    printf("Before Swapping \n num1 = %d \n num2 = %d \n", num1, num2);
    SWAP(num1, num2);
    return 0;
}