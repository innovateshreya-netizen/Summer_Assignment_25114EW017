/*Write a program to Print character pyramid.
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
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
            printf("%c", 'A'+ k-1);
        }

        // Print descending numbers
        for(int k = i - 1; k >= 1; k--)
        {
            printf("%c", 'A'+ k-1);
        }

        printf("\n");
    }

    return 0;
}