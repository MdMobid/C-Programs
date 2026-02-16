// WAP to find the factorial of a number n by using a suitable user defined function

#include<stdio.h>

void factorial(int n){
    int fact = 1;
    for (int i=1; i<=n; i++) fact *= i; 
    printf("Factorial of %d = %d\n", n, fact);
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n<0) printf("Factorial of -ve numbers is not defined\n");
    else factorial(n);
    return 0;
}