//Write a program to Create student record management system.

#include <stdio.h>

int main(){

    int n;

    printf("Enter total number of students:");
    scanf("%d",&n);

    char arr[n][10];

    printf("/nEnter Student info:/n");
    arr[0][0] = "Student ID";
    arr[1][0] = "Roll Number";
    arr[2][0] = "First Name";
    arr[3][0] = "Last Name";
    arr[4][0] = "Gender";
    arr[5][0] = "DOB";
    arr[6][0] = "Age";
    arr[7][0] = "Course";
    arr[8][0] = "Branch";
    arr[9][0] = "Year/Semester";

    for(int i=0; i<n; i++){
        for(int j=1; j<=i; j++){
            scanf("%s",&arr[i][j]);
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            printf("%c",arr[i][j]);
        }
    }

}