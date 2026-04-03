// Write a C program to remove all leading and trailing spaces from a given string, if any.

#include <stdio.h>

int main(){
    char s[100];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    int start = 0, end = 0;
    while(s[end] != '\n' && s[end] != '\0') end++;

    int x = start, y = end;
    for(int i = x; i < y; i++){
        if (s[i] == ' ') start++;
        else break;
    }
    for(int i = y; i >= start; i--){
        if (s[i] == ' ' || s[i] == '\n') end--;
        else break;
    }

    for(int i = start; i <= end; i++) printf("%c", s[i]);
    return 0;
}