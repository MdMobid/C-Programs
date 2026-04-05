/*
WAP to store n students’ information (i.e. student’s roll no, name, gender, marks in 5 subjects etc)
of an educational institute and display all the data with total marks of each student, using array of structure
If full mark of each subject is considered as 100 and pass mark as 40, then display the list of students failed in a particular subject.
*/


# include <stdio.h>

typedef struct student {
    int roll;
    char name[20];
    char gender;
    int marks[5];
} stu;

int main(){
    int n;
    printf("Enter No.of Students: ");
    scanf("%d", &n);
    getchar();   // flush leftover '\n' from scanf before fgets

    stu sarr[n];

    for (int i = 0; i < n; i++) {
        printf("\n Enter details for Student %d:\n", i + 1);

        printf("  Name:  ");
        fgets(sarr[i].name, 20, stdin);

        printf("  Roll No: ");
        scanf("%d", &sarr[i].roll);

        printf("  Gender: ");
        scanf(" %c", &sarr[i].gender);

        int marks[5];
        for(int j=0; j<5; j++){
            printf("  Marks in Subject %d: ", j+1);
            scanf("%d", &sarr[i].marks[j]);
        }

        getchar();   // flush '\n' so next iteration's fgets works correctly
    }

    int sub;
    printf("Enter subject number whose failed list to be displayed: ");
    scanf("%d", &sub);
    
    for (int i = 0; i < n; i++) {
        printf("\n Details for Student %d:\n", i + 1);
        printf("  Name: %s\n", sarr[i].name);
        printf("  Roll No: %d\n", sarr[i].roll);
        printf("  Gender: %c\n", sarr[i].gender);

        int sum = 0;
        for(int j=0; j<5; j++){
            sum += sarr[i].marks[j];
            printf("  Marks in Subject %d: %d\n", j+1, sarr[i].marks[j]);
        }
        printf("  Total Marks: %d\n", sum);
    }

    int count = 0;
    for(int i=0; i < n; i++) if(sarr[i].marks[sub-1] < 40) count++;
    printf("List of fail students: %d\n", count);
    return 0;
}