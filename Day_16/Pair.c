//Write a program to Find pair with given sum.

#include <stdio.h>

int main() {
    int n, sum;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter required sum: ");
    scanf("%d", &sum);

    int found = 0;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == sum) {
                printf("Pair found: %d and %d\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }

    if(found == 0) {
        printf("No pair found.");
    }

    return 0;
}