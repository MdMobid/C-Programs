// Write a program to check whether an entered string is palindrome or not

#include <stdio.h>

int palindrome(char str1[]);

int main(){
    char str1[100];

    printf("Enter String: ");
    fgets(str1, 100, stdin);

    int result = palindrome(str1);

    if (result) printf("Palindrome");
    else printf("Not Palindrome");
    return 0;
}

int palindrome(char str1[]){

    int len = 0;
    while (str1[len] != '\0'){
        len++;
    }

    int i = 0, j = len-2;
    while (i < j/2){
        if (str1[i] != str1[j]) return 0;
        i++,
        j--;
    }
    return 1;
}