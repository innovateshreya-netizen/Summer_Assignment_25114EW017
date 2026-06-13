//Write a program to Count even and odd elements.

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

    int ceven=0;
    int codd=0;

    for(i = 0; i < n; i++){
        if(arr[i]%2 == 0){
            ceven = ceven + 1;
        }
        else{
            codd = codd + 1;
        }
    }
    printf("\neven elements %d ",ceven);
    printf("\nodd element %d ",codd);

    return 0;
}