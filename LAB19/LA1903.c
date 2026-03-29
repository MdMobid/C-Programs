// Write a program to concatenate two strings without using any library function

#include <stdio.h>

int main(){
    char str1[100], str2[100];

    printf("Enter String 1: ");
    fgets(str1, 100, stdin);
    printf("Enter String 2: ");
    fgets(str2, 100, stdin);

    char str3[200];

    int i = 0;
    while (str1[i] != '\0' && str1[i] != '\n'){
        str3[i] = str1[i];
        i++;
    }
    str3[i++] = ' ';

    int j = 0;
    while (str2[j] != '\0' && str2[j] != '\n'){
        str3[i + j] = str2[j];
        j++;
    }
    str3[i + j] = '\0';

    int k = 0;
    while (k < i + j){
        printf("%c", str3[k]);
        k++;
    }

    printf("\n");
    return 0;
}