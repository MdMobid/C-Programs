#include <stdio.h>

struct complex {
    float real;
    float img;
};

void complex_swap(struct complex* x, struct complex* y) {
    float temp = x->real;
    x->real = y->real;
    y->real = temp;
    
    temp = x->img;
    x->img = y->img;
    y->img = temp;
}

int main() {
    struct complex c1;
    c1.real = 2;
    c1.img = 3;
    struct complex c2;
    c2.real = 4;
    c2.img = 5;
    
    printf("Before swapping:\n");
    printf("Complex number 1: %.2f + %.2fi\n", c1.real, c1.img);
    printf("Complex number 2: %.2f + %.2fi\n", c2.real, c2.img);
    complex_swap(&c1, &c2);
    printf("After swapping:\n");
    printf("Complex number 1: %.2f + %.2fi\n", c1.real, c1.img);
    printf("Complex number 2: %.2f + %.2fi\n", c2.real, c2.img);
    return 0;
}