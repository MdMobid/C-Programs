#include <stdio.h>

void strcopy(char str1[100], char str2[100]);

int main(){
   char str1[100], str2[100];

   printf("String Input: ");
   fgets(str1, 100, stdin);

   strcopy(str1, str2);
   printf("%s\n", str2);

   return 0;
}

void strcopy(char str1[100], char str2[100]){
   int i = 0;

   while(str1[i] != '\0'){
      str2[i] = str1[i];
      i++;
   }

   str2[i] = '\0';
}