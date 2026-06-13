//Write a program to Find sum and average of array.

#include <stdio.h>

int main() {
    int n, i, sum=0;

    printf("Enter the size: ");
    scanf("%d",&n);

    int arr[n];

    // Input array elements
    printf("Enter elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // Display array elements
    printf("Array elements are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    float avg = (sum/n);

    printf("\nSum of elements of array %d ",sum);
    printf("\naverage of elements of array %.2f ",avg);

    return 0;
}