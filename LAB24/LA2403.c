// WAP to add two distances (in km- meter) using structures

#include <stdio.h>

typedef struct distance {
    int km, m;
} d;


int main(){
    d d1;
    printf("Enter data for 1st distance:\n");
    printf("Enter km: ");
    scanf("%d", &d1.km);
    printf("Enter m: ");
    scanf("%d", &d1.m);

    d d2;
    printf("Enter data for 1st distance:\n");
    printf("Enter km: ");
    scanf("%d", &d2.km);
    printf("Enter m: ");
    scanf("%d", &d2.m);

    d sum;
    sum.km = d1.km + d2.km;
    sum.m = d1.m + d2.m;

    if (sum.m>=1000){
        sum.km = sum.km + (sum.m / 1000);
        sum.m = sum.m % 1000;
    }
    printf("Sum of distances = %dkm %dm", sum.km, sum.m);
    return 0;
}
