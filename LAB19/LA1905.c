// Write a C program to extract a substring from a given string.
// Prompt the user to enter the starting position and length of the substring

#include <stdio.h>

int main() {
    char str[100], substring[100];
    int start, length, i;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    int len = 0;
    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }

    printf("Start position: ");
    scanf("%d", &start);

    printf("Length: ");
    scanf("%d", &length);

    if (start + length > len) {
        length = len - start;
    }

    for (i = 0; i < length; i++) {
        substring[i] = str[start + i];
    }
    substring[i] = '\0';

    printf("Extracted substring: %s\n", substring);

    return 0;
}