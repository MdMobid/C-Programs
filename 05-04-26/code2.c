// Write a C program to find the first largest word in a given sentence. (comparing ASCII)

#include <stdio.h>
#include <string.h>

int main() {
    char str[200], largest[100] = "", current[100];
    int i = 0, j = 0;

    printf("Enter sentence: ");
    fgets(str, 100, stdin);

    while (str[i] != '\0') {

        if (str[i] != ' ' && str[i] != '\n') {
            current[j] = str[i];
            j++;
        }
        
        if (str[i] == ' ' || str[i] == '\n' || str[i+1] == '\0'){
            current[j] = '\0';
            if (strcmp(current, largest) > 0){
                strcpy(largest, current);
            }
            j = 0;
        }
        i++;
    }
    
    printf("Largest word is: %s\n", largest);

    return 0;
}