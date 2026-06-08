/*Write a program to Print character triangle.
A
AB
ABC
ABCD
ABCDE*/

#include <stdio.h>

int main()
{
    int n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            printf("%c", 'A' + j);
        }

        printf("\n");
    }

    return 0;
}
