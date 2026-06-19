//Write a program to Find diagonal sum.

#include <stdio.h>

int main(){
    int i, j, rows, cols;

    printf("Enter number of rows and columns , Should be Square matrix: ");
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

    //Diagonal Sum
    int diagonalSum = 0;
    for( i=0; i<rows; i++){
        for ( j = 0; j <cols; j++){
            if( i == j){
                diagonalSum += matrix1[i][j];
            }
        } 
    }

    //Displaying the results
    printf("Diagonal Sum: %d \n",diagonalSum);
    
return 0;
}