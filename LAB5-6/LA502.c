// WAP to read an alphabet from the user and convert it into uppercase if the entered alphabet is in lowercase, otherwise display an appropriate message.

#include <stdio.h>
int main(){
   
   char alph;
   
   printf("Enter an Alphabet : ");
   scanf("%c", &alph);
   
   if ( alph >= 'A' && alph <= 'B' ) {
      printf("You have entered %c which is already in uppercase\n", alph);
   } else {
      int lp_ascii = (int)alph;
      int up_ascii = lp_ascii - 32;
      printf("The upper case of the entered letter is : %c\n", (char)up_ascii);
   }
   
   return 0;
}
