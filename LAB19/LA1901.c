// WAP to find the length of a string with/without using library function for getting length of the string

#include <stdio.h>

int main(){
    char str1[100];

    printf("String Input: ");
    fgets(str1, 100, stdin);

    int count = 0;
    for(int i = 0; str1[i] != '\0'; i++){
        count++; 
    }
    printf("%d\n", count-1);
    return 0;
}