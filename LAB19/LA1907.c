// Write a program to count the number of vowels, consonants, new lines and the total number of characters and words present in a string.

#include <stdio.h>

int main(){
    char s[100];
    int v = 0, c = 0, n = 0, w = 0, tot = 0, i = 0;

    printf("Enter a String: ");
    fgets(s, sizeof(s), stdin);

    while(s[i] != '\0'){
        while(s[i] == ' ') w++;
        if ((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
            tot++;
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
                s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            v++;
            else c++;
        } else if (s[i] != '\n'){
            n++;
        }
    i++;
    }

    printf("Vowels: %d\n", v);
    printf("Consonants: %d\n", c);
    printf("New Lines: %d\n", n);
    printf("Words: %d\n", w + 1);
    printf("Total: %d\n", tot);
    return 0;
}