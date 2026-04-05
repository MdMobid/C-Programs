#include <stdio.h>

char* stradd(char str1[100], char str2[100]);

int main(){
   char str1[100], str2[100];
   char* str3;

   printf("String No.1: ");
   fgets(str1, 100, stdin);
   
   printf("String No.2: ");
   fgets(str2, 100, stdin);

   str3 = stradd(str1, str2);
   printf("%s\n", str3);

   return 0;
}

char* stradd(char str1[100], char str2[100]){
    static char str3[200];
    int i=0, j=0;

    while(str1[i] != '\0' && str1[i] != '\n'){
        str3[i] = str1[i];
        i++;
    }

    while(str2[j] != '\0' && str2[j] != '\n'){
        str3[i] = str2[j];
        i++;
        j++;
    }

    str3[i] = '\0';
    return str3;
}