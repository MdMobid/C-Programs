// Write a C program to find the first largest word in a given sentence.
// Assume that words are separated by spaces

#include <stdio.h>
#include <string.h>

int main() {
    char str[200], largest[100], current[100];
    int i = 0, j = 0, maxLen=0, currlen=0;

    printf("Enter sentence: ");
    fgets(str, 100, stdin);

    while (str[i] != '\0') {

        if (str[i] != ' ' && str[i] != '\n') {
            current[j] = str[i];
            j++;
        }
        
        if (str[i] == ' ' || str[i+1] == '\0'){
            current[j] = '\0';
            currlen = strlen(current);
            if (currlen > maxLen){
                maxLen = currlen;
                strcpy(largest, current);
            }
            j = 0;
        }
        i++;
    }

    printf("Longest word is: %s\n", largest);
    return 0;
}