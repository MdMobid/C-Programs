// WAP to find the nth Fibonacci number using recursion

#include <stdio.h>
int fibo(int n);

int main() {
    int n;
    printf("n = ");
    scanf("%d", &n);
    printf("nth Fibonacci No. = %d\n", fibo(n));
    return 0;
}

int fibo(int n){
    if (n == 1){
        return 0;
    }
    if (n == 2){
        return 1;
    }
    return fibo(n-2) + fibo(n-1);
}