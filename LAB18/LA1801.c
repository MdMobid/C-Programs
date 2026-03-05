// WAP to find the factorial of a number n by writing a recursive function for it

#include <stdio.h>
unsigned long long fact(int n);

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("%d\n", fact(n));
    return 0;
}

unsigned long long fact(int n){
    if (n == 0){
        return 1;
    }
    return fact(n-1) * n;
}