//Write a program to Check symmetric matrix.

#include <stdio.h>

int main(){
    int i, j, rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d",&rows,&cols);

    int matrix1[rows][cols];

    //Enter elements for matrix1
    printf("Enter elements for the matrix:\n");
    for( i=0; i<rows; i++){
        for ( j = 0; j <cols; j++)
        {
            printf("Enter element %d%d ",i+1,j+1);
            scanf("%d",&matrix1[i][j]);
        } 
    }

    int flag = 1;
    for( i=0; i<rows; i++){
        for ( j = 0; j <cols; j++)
        {
            if(matrix1[i][j] != matrix1[j][i]){
                flag = 0;
                break;
            }
        } 
    }
    if(flag){
        printf("This is a Symmetric Matrix");
    }
    else{
        printf("This is a Not Symmetric Matrix");
    }

return 0;
}