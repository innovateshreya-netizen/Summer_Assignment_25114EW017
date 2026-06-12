//Write a program to Write function for perfect number.

#include <stdio.h>

void PerfectNumber( int a )
{
    int sum=0;
    for( int i=1; i<a; i++){
        if( a%i == 0){
            sum = sum + i;
        }
    }
    if(sum == a){
        printf("Perfect number");
    }
    else{
        printf("not a Perfect number");
    }
}

int main()
{
    int a;

    printf("Enter a number: ");
    scanf("%d",&a);

    PerfectNumber(a);
    return 0;
}