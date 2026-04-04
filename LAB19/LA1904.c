// Write a program to check whether an entered string is palindrome or not

#include <stdio.h>

int main(){
    char str1[100];

    printf("Enter String: ");
    fgets(str1, 100, stdin);

    int len = 0;
    while (str1[len] != '\0' && str1[len] != '\n') len++;

    int i = 0;
    int flag = 0;
    for(i=0; i<len; i++){
        if (str1[i] != str1[len - i -1]) flag = 1;
        i++;
    }

    if (flag) printf("Not Palindrome");
    else printf("Palindrome");
    return 0;
}
