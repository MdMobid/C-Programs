/*
Print weekday name program according to given weekday number using switch-case
weekday number (0-6) and print weekday name
(Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, and Saturday)
*/

#include <stdio.h>

int main() {
    int day;
    printf("Enter day number (0-6): ");
    scanf("%d", &day);

    switch(day) {
        case 0: printf("Sunday\n"); break;
        case 1: printf("Monday\n"); break;
        case 2: printf("Tuesday\n"); break;
        case 3: printf("Wednesday\n"); break;
        case 4: printf("Thursday\n"); break;
        case 5: printf("Friday\n"); break;
        case 6: printf("Saturday\n"); break;
        default: printf("Invalid day number!\n");
    }
    return 0;
}
