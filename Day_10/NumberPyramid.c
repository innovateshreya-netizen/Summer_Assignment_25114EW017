/*Write a program to Print number pyramid.
    1
   121
  12321
 1234321
123454321
*/

#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        // Print spaces
        for(int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        // Print ascending numbers
        for(int k = 1; k <= i; k++)
        {
            printf("%d", k);
        }

        // Print descending numbers
        for(int k = i - 1; k >= 1; k--)
        {
            printf("%d", k);
        }

        printf("\n");
    }

    return 0;
}