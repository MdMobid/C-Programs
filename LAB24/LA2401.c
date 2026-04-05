// WAP to store one student’s information (i.e. student’s roll no, name, gender, marks etc)
// of an educational institute and display all the data, using structure

# include <stdio.h>

typedef struct student{
    char name[20];
    int roll;
    char gender;
    int marks;
} stu;

int main(){
    stu S1;
    printf("Enter the students' data:\n");
    printf("Name: ");
    fgets(S1.name, 20, stdin);
    printf("Roll No: ");
    scanf("%d", &S1.roll);
    printf("Gender: ");
    scanf(" %c", &S1.gender);
    printf("Marks: ");
    scanf(" %d", &S1.marks);
    
    printf("\nThe student's details are:\n");
    printf("Roll No: %d\n", S1.roll);
    printf("Name: %s", S1.name);
    printf("Gender: %c\n", S1.gender);
    printf("Marks: %d\n", S1.marks);
    return 0;
}