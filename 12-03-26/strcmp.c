#include <stdio.h>

int strcmp(char str1[100], char str2[100]);

int main(){
   char str1[100], str2[100];

   printf("String No.1: ");
   fgets(str1, 100, stdin);
   
   printf("String No.2: ");
   fgets(str2, 100, stdin);

   int result = strcmp(str1, str2);

   if (result == 0)
      printf("String is Equal\n");
   if (result == 1)
      printf("String No.1 is longer than String No.2\n");
   if (result == -1)
      printf("String No.1 is smaller than String No.2\n");

   return 0;
}

int strcmp(char str1[100], char str2[100]){

   for(int i = 0; str1[i] != '\0' || str2[i] != '\0'; i++){

      if (str1[i] > str2[i])
         return 1;

      if (str1[i] < str2[i])
         return -1;
   }

   return 0;
}

if ('a'>'b')