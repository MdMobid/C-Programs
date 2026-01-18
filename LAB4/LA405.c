/*
The buying price, the market price and discount are entered through keyboard.
Sometimes seller gets profit or sometimes loss depending upon discount.

WAP to determine whether the seller has made profit or incurred loss.
Also determine how much profit he made or loss he incurred.
*/

#include<stdio.h>
int main(){
   
   float bp, mp, discount, sp, profit_loss, percent;

   printf("Enter the buying price: ");
   scanf("%f", &bp);
   printf("Enter the market price: ");
   scanf("%f", &mp);
   printf("Enter the discount (in %%): ");
   scanf("%f", &discount);

   sp = mp - (mp * discount / 100);
   
   if(sp > bp){
       profit_loss = sp - bp;
       percent = (profit_loss / bp) * 100;
       printf("Seller made a profit of %f%%\n", percent);
   }
   else if(sp < bp){
       profit_loss = bp - sp;
       percent = (profit_loss / bp) * 100;
       printf("Seller made a loss of %f%%\n", percent);
   }
   else{
       printf("No profit, No loss.\n");
   }
   
   return 0;
}
