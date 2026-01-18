// WAP to find the roots of a quadratic equation ax2+bx+c=0 using if-else statement.

#include <stdio.h>
#include <math.h>

int main() {

    float a, b, c, discriminant, root1, root2, realPart, imgPart;
    int status;
    
    printf("Enter value of a: ");
    scanf("%f", &a);
    
    printf("Enter value of b: ");
    scanf("%f", &b);
    
    printf("Enter value of c: ");
    scanf("%f", &c);
    
    discriminant  = (b*b) - (4*a*c);
    
    if (discriminant > 0) status = 1;
    else if (discriminant == 0) status = 2;
    else status = 3;
    
    switch(status){
       case 1:
          root1 = (-b + sqrt(discriminant)) / (2*a);
          root2 = (-b - sqrt(discriminant)) / (2*a);
          printf("Roots are real and unequal.\n");
          printf("Roots are %.2f and %.2f\n", root1, root2);
          break;
          
       case 2:
          root1 = -b / (2*a);
          printf("Roots are real and equal.\n");
          printf("Root1 = Root2 = %.2f\n", root1);
          break;
          
       case 3:
          realPart = -b / (2*a);
          imgPart = sqrt(-discriminant) / (2*a);
          printf("Roots are imaginary.\n");
          printf("Root1 = %.2f + i%.2f\n", realPart, imgPart);
          printf("Root2 = %.2f - i%.2f\n", realPart, imgPart);
          break;
    }
    
    return 0;
}
