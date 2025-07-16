// Area of Square

#include<stdio.h>

int main() {
    int side; // Declare an variable for the side length

    printf("Enter the side of the square: "); // Prompt user for the side length
    scanf("%d", &side); // Read the side length from user

    printf("Area of Square = %d", side * side); // Calculate and print the area of the square
    return 0;
}