//Write a program to Write function for Fibonacci.

#include <stdio.h>

void fibonacci( int n )
{
    int a=0 , b=1;

    printf("fibonacci series: ");
    for(int i=1 ; i<=n ; i++){
        if( i==1){
            printf("%d ",a);
        }
        else if( i==2 ){
            printf("%d ",b);
        }
        else{
            int next = a+b;
            a=b;
            b=next;
            printf("%d ",b);
        }
    }
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d",&n);

    fibonacci(n);
    return 0;
}