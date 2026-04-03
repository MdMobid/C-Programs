// Write a C program to replace multiple occurrences of a specific word present in a given sentence with a single occurrence.
#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "I love the the the rain in in Spain";
    char target[] = "the";

    char word[100];
    char result[200] = "";
    char last[100] = "";

    int i = 0, j = 0;

    while (s[i] != '\0') {
        if (s[i] == ' ') {
            word[j] = '\0';

            // only skip if BOTH current and last written are the target
            if (strcmp(word, target) == 0 && strcmp(last, target) == 0) {
                // duplicate — skip it
            } else {
                if (strlen(result) > 0)
                    strcat(result, " ");
                strcat(result, word);
                strcpy(last, word);
            }

            j = 0;
        } else {
            word[j++] = s[i];
        }
        i++;
    }

    // handle the last word (no space after it)
    word[j] = '\0';
    if (strcmp(word, target) == 0 && strcmp(last, target) == 0) {
        // skip
    } else {
        if (strlen(result) > 0)
            strcat(result, " ");
        strcat(result, word);
    }

    printf("Input:  %s\n", s);
    printf("Output: %s\n", result);

    return 0;
}