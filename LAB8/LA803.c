// WAP to check whether a number n is prime number or not

#include <stdio.h>
int main() {

    int num, flag = 0;

    printf("n = ");
    scanf("%d", &num);

    for (int i=2; i <= num/2; i++) {
        if (num % i == 0) {
            flag = 1;
            break;
        }
    }

    if (flag == 0) printf("It is a Prime Number\n");
    else printf("It is not a Prime Number\n");

    return 0;
}