/*Write a program to Check strong number.
(A Strong Number is a number whose value is equal to the sum of the factorials of its digits.)*/

#include <stdio.h>

int main(){
    
int n, sum = 0;
printf("Enter a Number: ",n);
scanf("%d",&n);


int original = n;

while ( n!=0){
    int digit = n%10;
    int fact = 1;
    for(int i=1; i<=digit; i++){
        fact = fact*i;
    }
    sum = sum + fact;
    n = n/10;
}

if( sum == original){
    printf("%d is a Strong Number",original);
}
else{
   printf("%d is not a Strong Number",original); 
}

return 0;

}


