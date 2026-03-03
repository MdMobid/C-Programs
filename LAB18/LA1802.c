// WAP to calculate GCD/HCF of two numbers by using a recursive function

#include <stdio.h>
int gcd(int a, int b);

int main(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("GCD: %d\n", gcd(a, b));
    return 0;
}

int gcd(int a, int b){
    if (b == 0){
        return a;
    }
    int rem = a % b;
    a = b;
    b = rem;
    return gcd(a, b);
}