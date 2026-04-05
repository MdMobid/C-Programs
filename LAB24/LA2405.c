/*
WAP to store n employees' data such as employee name, gender, designation, department, basic pay etc using structures with dynamically memory allocation.
Calculate the gross pay of each employee as follows:
Gross pay = basic pay + HR + DA
HR=25% of basic
DA=75% of basic
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct employee{
    char name[100];
    char gender;
    char desig[50];
    char dept[50];
    int pay;
    float gross;
} emp;


int main(){
    int n;
    printf("Enter no. of Employee: ");
    scanf("%d", &n);
    getchar();

    emp* p = (emp*) malloc(n*sizeof(emp));

    for(int i=0; i<n; i++){
        printf("Enter Employee details-\n");
        printf("Name: ");
        fgets((p+i)->name, 100, stdin);

        printf("Gender: ");
        scanf(" %c", &(p+i)->gender);

        getchar();
        printf("Designation: ");
        fgets((p+i)->desig, 50, stdin);

        printf("Department: ");
        fgets((p+i)->dept, 50, stdin);

        printf("Basic Pay: ");
        scanf("%d", &(p+i)->pay);
        getchar();

        (p+i)->gross = (p+i)->pay + (p+i)->pay*0.25 + (p+i)->pay*0.75;
    }

    for(int i=0; i<n; i++){
        printf("\nDetails Employee-\n");
        printf("Name: %s", (p+i)->name) ;
        printf("Gender: %c\n", (p+i)->gender);
        printf("Designation: %s", (p+i)->desig);
        printf("Department: %s", (p+i)->dept);
        printf("Basic Pay: %d\n", (p+i)->pay);
        printf("Gross Pay: %.2f\n", (p+i)->gross);
    }

    free(p);

    return 0;
}