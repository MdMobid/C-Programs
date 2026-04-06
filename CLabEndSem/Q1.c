#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    printf("Enter a String: ");
    fgets(s, 100, stdin);

    int i=0, p=0, a=0; 
    while(s[i] != '\0'){
        if ((s[i] == '@') && (i>1)){
            a++;
        }
        if ((s[i] == '.') && (i< strlen(s)-3)){
            p++;
        }
        i++;
    }
    if(a==1 && p>0){
        printf("Valid\n");
    } else {
        printf("Invalid\n");
    }
    return 0;
}