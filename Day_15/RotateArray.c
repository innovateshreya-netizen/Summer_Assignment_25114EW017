//Write a program to Rotate array left

#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;

    int temp = arr[0];

    // Shift elements left
    for(int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Place first element at end
    arr[n - 1] = temp;

    printf("Array after left rotation:\n");

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}