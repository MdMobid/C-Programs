#include <stdio.h>
#include <string.h>

struct Employee {
    char firstName[50];
    char lastName[50];
    char category[50];
    char address[100];
    float basic_salary;
    float gross_salary;
};

float calculateGross(float basic) {
    return basic + (0.50 * basic) + (0.10 * basic);
}

int main() {
    struct Employee emp[100];
    int n = 0, i;
    char choice, searchName[50];
    float perc;

    while (1) {
        printf("\n--- Menu ---\nA. Enter new employee details\nB. Search employee details\nC. Increment the salary\nE. Exit\n");
        printf("What do you want to do? ");
        scanf(" %c", &choice);

        if (choice == 'E' || choice == 'e') break;

        switch (choice) {
            case 'A':
            case 'a':
                printf("\nEnter details for Employee %d:\n", n + 1);
                printf("First Name: "); scanf("%s", emp[n].firstName);
                printf("Last Name: "); scanf("%s", emp[n].lastName);
                printf("Category: "); scanf("%s", emp[n].category);
                printf("Address: "); scanf(" %[^\n]s", emp[n].address);
                printf("Basic Salary: "); scanf("%f", &emp[n].basic_salary);
                
                emp[n].gross_salary = calculateGross(emp[n].basic_salary);
                n++;
                break;

            case 'B':
            case 'b':
                printf("Enter First Name to search: ");
                scanf("%s", searchName);
                int found = 0;
                for (i = 0; i < n; i++) {
                    if (strcmp(emp[i].firstName, searchName) == 0) {
                        printf("\nName: %s %s\nAddress: %s\nGross Salary: %.2f\n", 
                               emp[i].firstName, emp[i].lastName, emp[i].address, emp[i].gross_salary);
                        found = 1;
                    }
                }
                if (!found) printf("Employee not found.\n");
                break;

            case 'C':
            case 'c':
                printf("Enter First Name for increment: ");
                scanf("%s", searchName);
                printf("Percentage Increase: ");
                scanf("%f", &perc);
                for (i = 0; i < n; i++) {
                    if (strcmp(emp[i].firstName, searchName) == 0) {
                        emp[i].basic_salary += (perc / 100) * emp[i].basic_salary;
                        emp[i].gross_salary = calculateGross(emp[i].basic_salary);
                        printf("Salary updated for %s.\nNew Gross Salary: %.2f\n", emp[i].firstName, emp[i].gross_salary);
                    }
                }
                break;

            default:
                printf("Invalid Choice!\n");
        }
    }
    return 0;
}