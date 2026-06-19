//Write a program to Add matrices.

#include <stdio.h>

int main(){
    int i, j, rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d",&rows,&cols);

    int matrix1[rows][cols] ,  matrix2[rows][cols] ,  sum[rows][cols];

    //Enter elemnts for matrix1
    printf("Enter elements for the 1st matrix:\n");
    for( i=0; i<rows; i++){
        for ( j = 0; j <cols; j++)
        {
            printf("Enter element %d%d ",i+1,j+1);
            scanf("%d",&matrix1[i][j]);
        } 
    }

    //Enter elemnts for matrix2
    printf("Enter elements for the 2nd matrix:\n");
    for( i=0; i<rows; i++){
        for ( j = 0; j <cols; j++)
        {
            printf("Enter element %d%d ",i+1,j+1);
            scanf("%d",&matrix2[i][j]);
        }
    }

    //Adding matrices
    for( i=0; i<rows; i++){
        for ( j = 0; j <cols; j++){
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        } 
    }

    //Displaying the results
    printf("Resultant matrix:\n");
    for( i=0; i<rows; i++){
        for ( j = 0; j <cols; j++){
            printf("%d\t",sum[i][j]);
        }
        printf("\n");   
    }
return 0;
}