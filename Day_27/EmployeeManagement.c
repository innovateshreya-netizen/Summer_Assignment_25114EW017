//Write a program to Create employee management system.

#include <stdio.h>

struct Employee
{
    int empID;
    char name[30];
    char department[30];
    char designation[30];
    float salary;
};

int main()
{
    int n;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee emp[n];

    // Input Employee Details
    for(int i = 0; i < n; i++)
    {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &emp[i].empID);

        printf("Name: ");
        scanf("%s", emp[i].name);

        printf("Department: ");
        scanf("%s", emp[i].department);

        printf("Designation: ");
        scanf("%s", emp[i].designation);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    // Display Employee Details
    printf("\n========== EMPLOYEE RECORDS ==========\n");

    for(int i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);
        printf("----------------------------\n");
        printf("Employee ID : %d\n", emp[i].empID);
        printf("Name        : %s\n", emp[i].name);
        printf("Department  : %s\n", emp[i].department);
        printf("Designation : %s\n", emp[i].designation);
        printf("Salary      : %.2f\n", emp[i].salary);
    }

    return 0;
}