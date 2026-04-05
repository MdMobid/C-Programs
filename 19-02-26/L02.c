// Write a program which takes two integers X and Y, and one character OP as input from the user.
// OP can be anything from {‘+’, ‘-’, ‘*’, ‘/’, ‘%’}. Based on OP value, your program
// should perform corresponding operation between X and Y and print the output.

#include<stdio.h>
int main(){
    int x, y;
    printf("Enter the value of x, y: ");
    scanf("%d %d", &x, &y);
    
    char op;
    printf("Enter Operator {+ - * / %%} : ");
    scanf(" %c", &op);

    int status;
    if (op=='+') status = 1;
    else if (op=='-') status = 2;
    else if (op=='*') status = 3;
    else if (op=='/') status = 4;
    else if (op=='%') status = 5;

    switch (status){
    case 1: 
        printf("%d\n", x+y);
        break;
    case 2: 
        printf("%d\n", x-y);
        break;
    case 3: 
        printf("%d\n", x*y);
        break;
    case 4: 
        printf("%.2f\n", (float) x/y);
        break;
    case 5: 
        printf("%d\n", x%y);
        break;
    default:
        printf("Enter a valid operator\n");
    }
    return 0;
}