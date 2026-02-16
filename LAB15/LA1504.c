// Write a C program to determine whether a number is prime or not using a function named as “PRIME”

#include<stdio.h>

int PRIME(int num){
    int flag = 0;
    for (int i=2; i<(num/2); i++){
        if (num % i==0){
            flag = 1;
            break;
        }
    }
    return flag;
}

int main(){
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    int flag = PRIME(num);
    if (flag == 0) printf("It is a Prime Number\n");
    else printf("It is not a Prime Number\n");
    return 0;
}