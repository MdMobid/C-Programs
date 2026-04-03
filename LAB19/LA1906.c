// Write a C program to find the first largest word in a given sentence.
// Assume that words are separated by spaces

#include <stdio.h>

int main() {
    char str[100];
    int i = 0, currLen = 0, maxLen = 0, maxStart = 0;

    printf("Enter sentence: ");
    fgets(str, 100, stdin);

    while (str[i] != '\0' && str[i] != '\n' && str[i] != '.') {
        if (str[i] != ' ') {
            currLen++;
        } else {
            if (currLen > maxLen) {
                maxLen = currLen;
                maxStart = i - currLen;
            }
            currLen = 0;
        }
        i++;
    }

    if (currLen > maxLen) {
        maxLen = currLen;
        maxStart = i - currLen;
    }

    printf("First largest word: ");
    for (int j = 0; j < maxLen; j++) {
        printf("%c", str[maxStart + j]);
    }

    return 0;
}