// Write a program to extract last character of every word present in a sentence

#include <stdio.h>

int main(){
    char str1[100];
    printf("Enter a sentence: ");
    fgets(str1, 100, stdin);

    for (int i = 0; str1[i] != '\0'; i++){
        if (str1[i] != ' ' && (str1[i+1] == ' ' || str1[i+1] == '\n' || str1[i+1] == '\0')){
            printf("%c", str1[i]);
        }
    }
    printf("\n");
    return 0;
}