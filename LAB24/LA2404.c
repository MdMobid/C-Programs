// WAP to add two times (in hr-min-sec) by passing structure to a function

#include <stdio.h>

typedef struct time {
    int h, m, s;
} time;

time add(time t1, time t2){
    time sum;
    sum.h = t1.h + t2.h;
    sum.m = t1.m + t2.m;
    sum.s = t1.s + t2.s;

    if (sum.m >= 60){
        sum.h += (sum.m / 60);
        sum.m = (sum.m % 60);
    }
    if (sum.s >= 60){
        sum.m += (sum.s / 60);
        sum.s = (sum.s % 60);
    }

    return sum;
}

int main(){
    time t1;
    printf("Enter Time 1: ");
    scanf("%d %d %d", &t1.h, &t1.m, &t1.s);

    time t2;
    printf("Enter Time 2: ");
    scanf("%d %d %d", &t2.h, &t2.m, &t2.s);

    time sum;
    sum = add(t1, t2);

    printf("Sum of Times = %d hours: %d minutes : %d seconds\n", sum.h, sum.m, sum.s);
    return 0;
}