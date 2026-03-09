// WAP to swap two numbers using call by reference

#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);

    swap(&a, &b);

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}