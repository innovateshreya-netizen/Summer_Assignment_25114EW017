//Write a program to Rotate array left

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

    //rotate array elements
    printf("\nRotated Array elements are: ");
    for( i=0 ; i < n ; i++){
        i -= 1;
        printf("%d ",arr[i]);
    }

    return 0;
}