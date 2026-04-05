// Write a recursive function to reverse a null terminated string

#include <stdio.h>
// void rev(char str);

int main() {
    int ch, length=0;
    printf("Input: ");
    
    while(ch!=EOF){
        ch = getchar();
        length += 1;
    }

    //rev(str[100], i);
}

// void rev(char str[100], int i){
//     printf("%c", str[i]);
//     i++;
//     rev(str[100], i);
// }