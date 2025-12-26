// WAP to take 10 different numbers as input. Print their sum and average.

#include <stdio.h>
int main() {
    int numbers[10];
    int sum = 0;
    float average;
    
    printf("Enter 10 numbers:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }
    
    average = sum / 10.0;
    
    printf("Sum: %d\n", sum);
    printf("Average: %f\n", average);
    
    return 0;
}