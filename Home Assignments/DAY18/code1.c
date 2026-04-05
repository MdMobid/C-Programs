// WAP to count number of digits of a positive integer n by using a recursive function

#include <stdio.h>
int count(int n, int _count);

int main() {
    int n, _count=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("no.of digits = %d\n", count(n, _count));
    return 0;
}

int count(int n, int _count){
    if (n == 0){
        return _count;
    }
    n /= 10;
    _count += 1;
    return count(n,_count);
}