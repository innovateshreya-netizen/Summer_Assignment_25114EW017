//Write a program to Move zeroes to end

#include <stdio.h>

int main() {
    int arr[] = {1, 3 , 0 , 5 , 0 , 7 , 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j = 0;

    // Move non-zero elements to the front
    for(i = 0; i < n; i++) {
        if(arr[i] != 0) {
            arr[j] = arr[i];
            j++;
        }
    }

    // Fill the remaining positions with 0
    while(j < n) {
        arr[j] = 0;
        j++;
    }

    printf("Array after moving zeroes to end:\n");

    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}