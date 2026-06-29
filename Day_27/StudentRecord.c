//Write a program to Create student record management system.

#include <stdio.h>

struct Student
{
    char studentID[20];
    char rollNo[20];
    char firstName[30];
    char lastName[30];
    char gender[10];
    char dob[15];
    int age;
    char course[30];
    char branch[30];
    char semester[20];
};

int main()
{
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student s[n];//here s is an array , struc Student provides Template....

    // Input
    for(int i = 0; i < n; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Student ID: ");
        scanf("%s", s[i].studentID);

        printf("Roll Number: ");
        scanf("%s", s[i].rollNo);

        printf("First Name: ");
        scanf("%s", s[i].firstName);

        printf("Last Name: ");
        scanf("%s", s[i].lastName);

        printf("Gender: ");
        scanf("%s", s[i].gender);

        printf("Date of Birth (DD/MM/YYYY): ");
        scanf("%s", s[i].dob);

        printf("Age: ");
        scanf("%d", &s[i].age);

        printf("Course: ");
        scanf("%s", s[i].course);

        printf("Branch: ");
        scanf("%s", s[i].branch);

        printf("Semester: ");
        scanf("%s", s[i].semester);
    }

    // Display
    printf("\n\n========== STUDENT RECORDS ==========\n");

    for(int i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("----------------------------\n");
        printf("Student ID    : %s\n", s[i].studentID);
        printf("Roll Number   : %s\n", s[i].rollNo);
        printf("First Name    : %s\n", s[i].firstName);
        printf("Last Name     : %s\n", s[i].lastName);
        printf("Gender        : %s\n", s[i].gender);
        printf("DOB           : %s\n", s[i].dob);
        printf("Age           : %d\n", s[i].age);
        printf("Course        : %s\n", s[i].course);
        printf("Branch        : %s\n", s[i].branch);
        printf("Semester      : %s\n", s[i].semester);
    }

    return 0;
}