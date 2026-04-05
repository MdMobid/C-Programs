// Use structures to perform addition, subtraction, multiplication and division operations on two complex numbers.

#include <stdio.h>

typedef struct COMPLEX_NUMBERS {
    float real, img;
} com;

com add(com c1, com c2){
    com result;
    result.real = c1.real + c2.real;
    result.img = c1.img + c2.img;
    return result;
}

com subtract(com c1, com c2){
    com result;
    result.real = c1.real - c2.real;
    result.img = c1.img - c2.img;
    return result;
}
 
com multiply(com c1, com c2){
    com result;
    result.real = (c1.real * c2.real) - (c1.img * c2.img);
    result.img = (c1.real * c2.img) + (c2.real * c1.img);
    return result;
}

com division(com c1, com c2){
    com result;
    float den = (c2.real * c2.real) + (c2.img * c2.img);

    if (den == 0) printf("Divison by Zero is not valid\n");
    else {
        result.real = ((c1.real * c2.real) + (c1.img * c2.img)) / den;
        result.img = ((c1.img * c2.real) - (c1.real * c2.img)) / den;
    }
    return result;
}

int main(){
    com c1;
    printf("Enter 1st Complex Number : ");
    scanf("%f %f", &c1.real, &c1.img);

    com c2;
    printf("Enter 2nd Complex Number : ");
    scanf("%f %f", &c2.real, &c2.img);

    printf("1st Complex No : %.2f + %.2fi\n", c1.real, c1.img);
    printf("2nd Complex No : %.2f + %.2fi\n", c2.real, c2.img);

    while(1){
        printf("What do you want to do?\ne -> exit\na -> addition\ns -> subtraction\nm -> multiplication\nd -> division\n");
        char choice;
        printf("Enter Choice: ");
        scanf(" %c", &choice);

        com result;
        switch(choice){
        case 'a':
            result = add(c1, c2);
            break;
        case 's':
            result = subtract(c1, c2);
            break;
        case 'm':
            result = multiply(c1, c2);
            break;
        case 'd':
            result = division(c1, c2);
            break;
        case 'e':
            return 0;
        default:
            printf("Invalid Choice\n");
            break;
        }

        printf("Resultant Complex No : %.2f + %.2fi\n\n", result.real, result.img);
    }

    return 0;
}