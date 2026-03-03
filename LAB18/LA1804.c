// Write a recursive function to add the digits of a positive integer

#include<stdio.h>
int sum(int n, int _sum);

int main(){
    int n, _sum = 0;
    printf("Input: ");
    scanf("%d", &n);
    printf("Sum of digits = %d\n", sum(n, _sum));
    return 0;
}

int sum(int n, int _sum){
    if (n == 0){
        return _sum;
    }
    int digit = n % 10;
    n = n/10;
    _sum += digit;
    return sum(n, _sum);
}