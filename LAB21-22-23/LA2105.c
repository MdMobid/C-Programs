// WAP to count vowels and consonants in a string using pointer

#include <stdio.h>

int main(){
    char s[100];
    printf("Enter a string: ");
    scanf("%s", s);

    char* p = s;
    int v=0, c=0, i=0;

    while(*(p+i) != '\0'){
        if ((*(p+i)>='a' && *(p+i)<='z') || (*(p+i)>='A' && *(p+i)<='Z')){
            if (*(p+i) == 'a' || *(p+i) == 'e' || *(p+i) == 'i' || *(p+i) == 'o' || *(p+i) == 'u' ||
                *(p+i) == 'A' || *(p+i) == 'E' || *(p+i) == 'I' || *(p+i) == 'O' || *(p+i) == 'U')
            v++;
            else c++;
        }
        i++;
    }

    printf("Vowels: %d\n", v);
    printf("Consonants: %d\n", c);
    return 0;
}