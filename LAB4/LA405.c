/*
The buying price, the market price and discount are entered through keyboard.
Sometimes seller gets profit or sometimes loss depending upon discount.

WAP to determine whether the seller has made profit or incurred loss.
Also determine how much profit he made or loss he incurred.
*/

#include<stdio.h>
int main(){
   
   float buying_price, market_price, discount, selling_price, profit_loss, percentage;

   printf("Enter the buying price: ");
   scanf("%f", &buying_price);
   printf("Enter the market price: ");
   scanf("%f", &market_price);
   printf("Enter the discount (in %%): ");
   scanf("%f", &discount);

   selling_price = market_price - (market_price * discount / 100);
   
   if(selling_price > buying_price){
       profit_loss = selling_price - buying_price;
       percentage = (profit_loss / buying_price) * 100;
       printf("Seller made a profit of %f%%\n", percentage);
   }
   else if(selling_price < buying_price){
       profit_loss = buying_price - selling_price;
       percentage = (profit_loss / buying_price) * 100;
       printf("Seller made a loss of %f%%\n", percentage);
   }
   else{
       printf("No profit, No loss.\n");
   }
   
   return 0;
}