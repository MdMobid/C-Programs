// Write a program to count the frequency of each character present in a string

#include <stdio.h>

int main(){
    char s[100];
    int freq[256] = {0};
    printf("Enter String: ");
    fgets(s, sizeof(s), stdin);

    int i = 0;
    while(s[i] != '\0'){
        if (s[i] != '\n'){
            freq[(int) s[i]]++;
        }
        i++;
    }

    printf("\nCharacter Frequencies:\n");
    for(int j = 0; j < 256; j++) {
        if(freq[j] > 0) {
            printf("'%c' = %d\n", j, freq[j]);
        }
    }

    return 0;
}