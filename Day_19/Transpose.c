//Write a program to Transpose matrix.

#include <stdio.h>

int main(){
    int i, j, rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d",&rows,&cols);

    int matrix1[rows][cols] , transpose[rows][cols];

    //Enter elemnts for matrix1
    printf("Enter elements for the matrix:\n");
    for( i=0; i<rows; i++){
        for ( j = 0; j <cols; j++)
        {
            printf("Enter element %d%d ",i+1,j+1);
            scanf("%d",&matrix1[i][j]);
        } 
    }

    //Transpose matrix
    for( i=0; i<rows; i++){
        for ( j = 0; j <cols; j++){
            transpose[j][i] = matrix1[i][j];
        } 
    }

    //Displaying the results
    printf("Resultant matrix:\n");
    for( i=0; i<rows; i++){
        for ( j = 0; j <cols; j++){
            printf("%d\t",transpose[i][j]);
        }
        printf("\n");   
    }
return 0;
}