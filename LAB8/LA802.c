/*
WAP to test whether a number is Perfect Number or not.
(A number is said to be Perfect when the sum of factors excluding the number itself is equal to the original number. Ex-6)
*/

#include <stdio.h>
int main() {
    
    int num,sum=0;
    
    printf("n = ");
    scanf("%d", &num);
    
    for (int i=1; i <= num/2; i++){
       if (num % i == 0){
          sum = sum + i;
       }
    }
    
    if(num == sum){
       printf("Number is Perfect\n");
    } else {
       printf("Number is not Perfect\n");
    }
    
    return 0;
}
