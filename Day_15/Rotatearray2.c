//Write a program to Rotate array right.

#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;

    int temp = arr[n-1];

    // Shift elements right
    for(int i = n-1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    // Place first element at end
    arr[0] = temp;

    printf("Array after right rotation:\n");

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}