// Write a C program to take three distinct numbers X, Y and Z as input and find the second minimum and print it

#include<stdio.h>
int main(){
    int x, y, z;
    printf("Enter the value of x, y, z: ");
    scanf("%d %d %d", &x, &y, &z);

    if ((x<y && x>z) || (x>y && x<z)){
        printf("%d", x);
    }
    else if ((y<x && y>z) || (y>x && y<z)){
        printf("%d", y);
    }
    else{
        printf("%d", z);
    }
}