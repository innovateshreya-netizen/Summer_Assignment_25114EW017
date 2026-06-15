//Write a program to Reverse array.

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the size: ");
    scanf("%d",&n);

    int arr[n];

    // Input array elements
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display array elements
    printf("Array elements are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    //reverse array elements
    printf("\nArray elements are: ");
    for(i = n-1; i >=0 ; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}