#include <stdio.h>

struct complex {
    float real;
    float img;
};

struct complex add(struct complex c1, struct complex c2) {
    struct complex result;
    result.real = c1.real + c2.real;
    result.img = c1.img + c2.img;
    return result;
}

int main() {
    struct complex c1, c2, sum;

    printf("Enter the real and imaginary parts of the first complex number: ");
    scanf("%f %f", &c1.real, &c1.img);

    printf("Enter the real and imaginary parts of the second complex number: ");
    scanf("%f %f", &c2.real, &c2.img);

    sum = add(c1, c2);
    printf("The sum of the two complex numbers is: %.2f + %.2fi\n", sum.real, sum.img);

    return 0;
}