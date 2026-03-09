// WAP to multiply two numbers using pointers

#include <stdio.h>
int multiply(int *a, int *b) {
    return (*a) * (*b);
}

int main() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    int product = multiply(&num1, &num2);

    printf("Product: %d\n", product);

    return 0;
}