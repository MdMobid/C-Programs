#include <stdio.h>

struct complex {
    float real;
    float img;
};

void complex_add(struct complex c1, struct complex c2) {
    struct complex result;
    result.real = c1.real + c2.real;
    result.img = c1.img + c2.img;
    printf("%.2f + %.2fi\n", result.real, result.img);
}

int main() {
    struct complex c1;
    c1.real = 2;
    c1.img = 3;
    struct complex c2;
    c2.real = 4;
    c2.img = 5;
    complex_add(c1, c2);
    return 0;
}