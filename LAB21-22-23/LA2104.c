// WAP to print a string in reverse using a pointer

#include <stdio.h>

int main(){
    char s1[100];
    char temp;
    printf("Enter a string: ");
    fgets(s1, 100, stdin);

    char* start = s1;
    char* end = s1;

    while (*end != '\0' && *end != '\n'){
        end++;
    }
    end--;

    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
    
    printf("Reversed string: %s", s1);

    return 0;
}