//Write a program to Frequency of an element.

#include <stdio.h>

int main() {
    int n, i, count = 0;
    int arr[] = {45, 56, 78, 89, 21, 45, 78, 78, 21};

    printf("Enter the value you want: ");
    scanf("%d", &n);

    for(i = 0; i < 9; i++) {
        if(arr[i] == n) {
            count++;
        }
    }
    printf("the value %d appear %d times in the array",n,count);


    return 0;
}