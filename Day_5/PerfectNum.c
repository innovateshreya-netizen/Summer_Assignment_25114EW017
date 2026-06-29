/*Write a program to Check perfect number.
(A Perfect Number is a number that is equal to the sum of its proper divisors (excluding the number itself).)*/

#include <stdio.h>

int main(){
    
int n, sum = 0;
printf("Enter a Number: ");
scanf("%d",&n);

int original=n;
for(int i=1 ; i<n ; i++){
    if(n%i == 0){
        sum = sum + i;
    }
}

if( sum == original){
    printf("%d is a Perfect Number",original);
}
else{
   printf("%d is not a Perfect Number",original); 
}

return 0;

}



