//Write a program to Find duplicates in array.

#include <stdio.h>

int main() {
    int arr[] = {45, 56, 78, 89, 21, 45, 78, 78, 21};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i, j;

    printf("Duplicate elements are: ");

    for(i = 0; i < size; i++) {

        // Check if arr[i] has already been printed
        int isDuplicate = 0;

        for(j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                isDuplicate = 1;
                break;
            }
        }

        if(isDuplicate) {
            continue;
        }

        // Count occurrences of arr[i]
        int count = 0;

        for(j = 0; j < size; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }

        if(count > 1) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}