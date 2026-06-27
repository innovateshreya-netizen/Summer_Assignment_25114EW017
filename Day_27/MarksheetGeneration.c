//Write a program to Create marksheet generation system.

#include <stdio.h>

struct Student
{
    int studentID;
    char name[30];
    int sub1, sub2, sub3, sub4, sub5;
    int total;
    float percentage;
    char grade[5];
};

int main()
{
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for(int i = 0; i < n; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Student ID: ");
        scanf("%d", &s[i].studentID);

        printf("Student Name: ");
        scanf("%s", s[i].name);

        printf("Marks in Subject 1: ");
        scanf("%d", &s[i].sub1);

        printf("Marks in Subject 2: ");
        scanf("%d", &s[i].sub2);

        printf("Marks in Subject 3: ");
        scanf("%d", &s[i].sub3);

        printf("Marks in Subject 4: ");
        scanf("%d", &s[i].sub4);

        printf("Marks in Subject 5: ");
        scanf("%d", &s[i].sub5);

        // Calculate Total
        s[i].total = s[i].sub1 + s[i].sub2 + s[i].sub3 +
                     s[i].sub4 + s[i].sub5;

        // Calculate Percentage
        s[i].percentage = s[i].total / 5.0;

        // Assign Grade
        if(s[i].percentage >= 90)
            sprintf(s[i].grade, "A+");
        else if(s[i].percentage >= 80)
            sprintf(s[i].grade, "A");
        else if(s[i].percentage >= 70)
            sprintf(s[i].grade, "B");
        else if(s[i].percentage >= 60)
            sprintf(s[i].grade, "C");
        else if(s[i].percentage >= 50)
            sprintf(s[i].grade, "D");
        else
            sprintf(s[i].grade, "F");
    }

    printf("\n========== MARKSHEET ==========\n");

    for(int i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("-----------------------------\n");
        printf("Student ID : %d\n", s[i].studentID);
        printf("Name       : %s\n", s[i].name);
        printf("Subject 1  : %d\n", s[i].sub1);
        printf("Subject 2  : %d\n", s[i].sub2);
        printf("Subject 3  : %d\n", s[i].sub3);
        printf("Subject 4  : %d\n", s[i].sub4);
        printf("Subject 5  : %d\n", s[i].sub5);
        printf("Total      : %d\n", s[i].total);
        printf("Percentage : %.2f%%\n", s[i].percentage);
        printf("Grade      : %s\n", s[i].grade);
    }

    return 0;
}