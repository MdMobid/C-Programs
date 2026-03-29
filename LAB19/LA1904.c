// Write a program to check whether an entered string is palindrome or not

#include <stdio.h>

int main(){
    char str1[100];

    printf("Enter String: ");
    fgets(str1, 100, stdin);

    int len = 0;
    while (str1[len] != '\0') len++;

    int i = 0, j = len-2;
    int flag = 0;
    while (i < j/2){
        if (str1[i] != str1[j]) flag = 1;
        i++;
        j--;
    }

    if (flag) printf("Not Palindrome");
    else printf("Palindrome");
    return 0;
}
