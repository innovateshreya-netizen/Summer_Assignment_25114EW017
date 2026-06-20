//Write a program to Find row-wise sum.

#include <stdio.h>

int main(){
    int i, j, rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d",&rows,&cols);

    int matrix1[rows][cols];

    //Enter elemnts for matrix1
    printf("Enter elements for the 1st matrix:\n");
    for( i=0; i<rows; i++){
        for ( j = 0; j <cols; j++)
        {
            printf("Enter element %d%d ",i+1,j+1);
            scanf("%d",&matrix1[i][j]);
        } 
    }

    //Rowwise Sum matrices
    int RowSum = 0;
    for( i=0; i<rows; i++){
        for ( j = 0; j <cols; j++){
            RowSum += matrix1[i][j];
        }
        printf("\nSum of elements of %d Row = %d ",i+1,RowSum);
        RowSum = 0;
    }

return 0;
}