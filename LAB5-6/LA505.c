// WAP to find the roots of a quadratic equation ax2+bx+c=0 using if-else statement.

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2, realPart, imagPart;
        
    printf("Enter value of a: ");
    scanf("%f", &a);
    
    printf("Enter value of b: ");
    scanf("%f", &b);
    
    printf("Enter value of c: ");
    scanf("%f", &c);

    discriminant = (b * b) - (4 * a * c);

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The Roots are real & unequal.\n");
        printf("Roots are %.2f and %.2f\n", root1, root2);
    }
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("The roots are real and equal.\n");
        printf("Roots are %.2f both.\n", root1);
    }
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("The Roots are imaginary.\n");
        printf("Root1 = %.2f + i%.2f\n", realPart, imagPart);
        printf("Root2 = %.2f - i%.2f\n", realPart, imagPart);
    }

    return 0;
}
