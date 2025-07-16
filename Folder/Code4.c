// Area of Circle

#include<stdio.h>

int main() {
    float radius;

    printf("Enter the radius of the circle: "); // Prompt user for the radius
    scanf("%f", &radius); // Read the radius from user

    printf("Area of Circle = %f", 3.14 * radius * radius); // Calculate and print the area of the circle
    return 0;
}