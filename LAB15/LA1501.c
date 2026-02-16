// WAP to add two numbers entered through the keyboard by using a suitable user defined function

#include<stdio.h>

int add(int a, int b){
    int temp = a + b;
    return temp;
}

int main(){
    int x, y;
    printf("Enter two numbers:\n");
    scanf("%d %d", &x, &y);
    int sum = add(x, y);
    printf("Sum = %d\n", sum);
}