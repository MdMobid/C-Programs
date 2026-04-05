/*
WAP to declare an union named as ABC having three members a, b and c as character, integer and double respectively.
Assign user entered values to these members respectively one by one and display these values immediately.
Again, assign these user entered values to a, b, c one by one, all together and display these values at last.
Find the difference.
*/

#include <stdio.h>

union ABC {
    char a;
    int b;
    double c;
};

int main(){
    union ABC u;
    printf("--- One by one ---\n");
    printf("Enter a character: "); scanf(" %c", &u.a);
    printf("Character: %c\n", u.a);
    printf("Enter a integer: "); scanf(" %d", &u.b);
    printf("Character: %d\n", u.b);
    printf("Enter a double: "); scanf(" %lf", &u.c);
    printf("Double: %lf\n", u.c);

    printf("\n--- All together ---\n");
    printf("Enter char, int, double: ");
    scanf(" %c %d %lf", &u.a, &u.b, &u.c);
    printf("Character: %c\n", u.a);
    printf("Integer: %d\n", u.b);
    printf("Double: %lf\n", u.c);
    return 0;
}
