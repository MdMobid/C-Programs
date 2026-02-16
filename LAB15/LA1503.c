/*
A Fibonacci sequence is defined as follows: the first and second terms in the sequence are 0 and 1
Subsequent terms are found by adding the preceding two terms in the sequence (Fi = Fi-1 + Fi-2).
WAP to find out the value of n th term of the Fibonacci sequence by writing a suitable user defined function.
*/

#include<stdio.h>

void fibonacci(int n){
    int arr[n];
    int a=0, b=1;
    for (int i=0; i<n; i++){
        if (i==0){
            arr[i]=a;
            continue;
        }
        if (i==1){
            arr[i]=b;
            continue;
        }
        arr[i] = a + b;
        a = b;
        b = arr[i];
    }
    printf("Fibonacci number = %d\n", arr[n-1]);
}

int main(){
    int n;
    printf("Enter a Fibonacci Serial No.: ");
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}