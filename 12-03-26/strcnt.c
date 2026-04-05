#include <stdio.h>

int strcnt(char str1[100]);

int main(){
   char str1[100];

   printf("String Input: ");
   fgets(str1, 100, stdin);

   int result = strcnt(str1);
   printf("%d\n", result-1);

   return 0;
}

int strcnt(char str1[100]){
   int count = 0;
   for(int i = 0; str1[i] != '\0'; i++){
      count++; 
   }
   return count;
}