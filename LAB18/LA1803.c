// WAP by designing a recursive function to calculate the sum of the digits of any given integer until it becomes a single digit number

#include<stdio.h>
int sum(int n);

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Sum of digits (upto single digit) = %d\n", sum(n));
    return 0;
}

int sum(int n){
    if (n<10){
        return n;
    }
    int _sum = 0;
    while (n!=0){
        int digit = n % 10;
        n = n/10;
        _sum += digit;
    }
    return sum(_sum);
}