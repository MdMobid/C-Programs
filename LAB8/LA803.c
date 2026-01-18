// WAP to check whether a number n is prime number or not

#include <stdio.h>
int main() {
    
    int num, counter = 0;
    
    printf("n = ");
    scanf("%d", &num);
    
    for (int i=1; i <= num/2; i++)
    if (num % i == 0)
    if (i == 1)
    counter = 1;
    
    if (counter == 0) printf("It is a Prime Number\n");
    else printf("It is not a Prime Number\n");

    return 0;
}
