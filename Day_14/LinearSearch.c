//Write a program to Linear search.

#include <stdio.h>

int main() {
    int n, i, found = 0;
    int arr[] = {45, 56, 78, 89, 21};

    printf("Enter the value you want: ");
    scanf("%d", &n);

    for(i = 0; i < 5; i++) {
        if(arr[i] == n) {
            printf("Got the value %d at index = %d", arr[i], i);
            found = 1;
            break;
        }
    }

    if(found == 0) {
        printf("Value not found");
    }

    return 0;
}