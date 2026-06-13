//Write a program to Find largest and smallest element.

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the size: ");
    scanf("%d",&n);

    int arr[n];

    // Input array elements
    printf("Enter elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display array elements
    printf("Array elements are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    int max = arr[0];
    int min = arr[0];
    
    for(i = 1; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }

    printf("\nLargest element %d ",max);
    printf("\nSmallest element %d ",min);

    return 0;
}