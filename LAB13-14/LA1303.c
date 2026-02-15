// WAP to multiply two matrices and display it

#include <stdio.h>
int main(){
   
   int A[3][3], B[3][3];
   
   printf("Enter elements of Matrix A\n");
   for(int i=0; i<3; i++){
      for (int j=0; j<3; j++){
         scanf("%d", &A[i][j]); 
      }
   }
   
   printf("Enter elements of Matrix B\n");
   for(int i=0; i<3; i++){
      for (int j=0; j<3; j++){
         scanf("%d", &B[i][j]);
      }
   }
   
   printf("Multipication of Matrices:\n");
   for(int i=0; i<3; i++){
      for (int j=0; j<3; j++){
        int sum = 0;
        for (int k=0; k<3; k++){
            sum = sum + (A[i][k] * B[k][j]);
        }
        printf("%d ", sum);
      }
      printf("\n");
   }
   return 0;
}