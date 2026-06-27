//Write a program to Create salary management system.

#include <stdio.h>

struct Salary
{
    int empID;
    char name[30];
    float basicSalary;
    float hra;
    float da;
    float tax;
    float grossSalary;
    float netSalary;
};

int main()
{
    int n;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Salary s[n];

    // Input
    for(int i = 0; i < n; i++)
    {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &s[i].empID);

        printf("Employee Name: ");
        scanf("%s", s[i].name);

        printf("Basic Salary: ");
        scanf("%f", &s[i].basicSalary);

        printf("HRA: ");
        scanf("%f", &s[i].hra);

        printf("DA: ");
        scanf("%f", &s[i].da);

        printf("Tax: ");
        scanf("%f", &s[i].tax);

        // Calculate Salary
        s[i].grossSalary = s[i].basicSalary + s[i].hra + s[i].da;
        s[i].netSalary = s[i].grossSalary - s[i].tax;
    }

    // Display
    printf("\n========== SALARY REPORT ==========\n");

    for(int i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);
        printf("-----------------------------\n");
        printf("Employee ID   : %d\n", s[i].empID);
        printf("Name          : %s\n", s[i].name);
        printf("Basic Salary  : %.2f\n", s[i].basicSalary);
        printf("HRA           : %.2f\n", s[i].hra);
        printf("DA            : %.2f\n", s[i].da);
        printf("Tax           : %.2f\n", s[i].tax);
        printf("Gross Salary  : %.2f\n", s[i].grossSalary);
        printf("Net Salary    : %.2f\n", s[i].netSalary);
    }

    return 0;
}