// WAP to add two distances (in km- meter) using structures (Using Pointers)

#include <stdio.h>

typedef struct distance {
    int km, m;
} d;

void sumDis(d *d1, d *d2, d *sum){
    sum->km = d1->km + d2->km;
    sum->m = d1->m + d2->m;
}

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
    d* p1 = &d1;
    d* p2 = &d2;
    d* p3 = &sum; 
    sumDis(p1, p2, p3);
    
    printf("Sum of distances = %dkm %dm", sum.km, sum.m);
    return 0;
}
