//Write a program to Find missing number in array.

#include <stdio.h>

int main() {
    int n, i, actualSum = 0;

    printf("Enter the size: ");
    scanf("%d",&n);

    int arr[n];

    // Input array elements
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display array elements
    printf("Array elements are:");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    //Actual sum
    for(int i = 0; i < n - 1; i++) {
        actualSum += arr[i];
    }

    int expectedSum = n * (n+1)/2;
    
    int Missing = expectedSum - actualSum;
    printf("\nMissing Number is  = %d",Missing);

    return 0;
}