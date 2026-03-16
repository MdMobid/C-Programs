// WAP to find the length of a string with/without using library function for getting length of the string

#include <stdio.h>

int strlength(char str[]);

int main(){
    char str1[100];

    printf("String Input: ");
    fgets(str1, 100, stdin);

    int result = strlength(str1);
    printf("%d\n", result-1);
    return 0;
}

int strlength(char str1[]){
    int count = 0;
    for(int i = 0; str1[i] != '\0'; i++){
        count++; 
    }
    return count;
}