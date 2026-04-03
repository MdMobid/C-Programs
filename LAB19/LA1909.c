// Write a program to replace all the occurrence of a particular character in a string by its previous 3 rd character, If any.

#include <stdio.h>
int main(){
    char s[200];
    char ch;
    int i;
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    printf("Enter character to replace: ");
    scanf(" %c", &ch);
    for (i = 0; s[i] != '\0'; i++)
        if (s[i] == ch)
            s[i] = s[i - 2];
    printf("%s", s);
    return 0;
}