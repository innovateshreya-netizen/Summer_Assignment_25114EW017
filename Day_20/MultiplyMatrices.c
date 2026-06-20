//Write a program to Multiply matrices.

#include <stdio.h>

int main(){
    int i, j, r1, c1, r2, c2;

    printf("Enter number of rows and columns for 1st matrix: ");
    scanf("%d %d",&r1,&c1);

    int matrix1[r1][c1];

    //Enter elements for matrix1
    printf("Enter elements for the 1st matrix:\n");
    for( i=0; i<r1; i++){
        for ( j = 0; j <c1; j++)
        {
            printf("Enter element %d%d ",i+1,j+1);
            scanf("%d",&matrix1[i][j]);
        } 
    }

    printf("Enter number of rows and columns for 2nd matrix: ");
    scanf("%d %d",&r2,&c2);

    int matrix2[r2][c2];

    //Enter elements for matrix2
    printf("Enter elements for the 2nd matrix:\n");
    for( i=0; i<r2; i++){
        for ( j = 0; j <c2; j++)
        {
            printf("Enter element %d%d ",i+1,j+1);
            scanf("%d",&matrix2[i][j]);
        }
    }

    int mulmatrix[r1][c2];

    //Multiplying matrices
    if(c1 == r2){
        for(i = 0; i < r1; i++)
        {
            for(j = 0; j < c2; j++)
            {
                mulmatrix[i][j] = 0;

                for(int k = 0; k < c1; k++)
                {
                    mulmatrix[i][j] += matrix1[i][k] * matrix2[k][j];
                }
            }
        }
    }
    
    else{
        printf("Multiplication not possible");
    }

    //Displaying the results
    printf("Resultant matrix:\n");
    for( i=0; i<r1; i++){
        for ( j = 0; j <c2; j++){
            printf("%d\t",mulmatrix[i][j]);
        }
        printf("\n");   
    }
return 0;
}