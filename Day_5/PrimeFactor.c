//Write a program to Find largest prime factor.

#include <stdio.h>

int main()
{
    int n, prime, lpf = 0;

    printf("Enter a Number: ");
    scanf("%d", &n);

    printf("Factors of %d are: ", n);

    for(int i = 1; i < n; i++)
    {
        if(n % i == 0)
        {
            printf("%d ", i);

            prime = 1;

            if(i == 1)
            {
                prime = 0;
            }
            else
            {
                for(int j = 2; j <= i / 2; j++)
                {
                    if(i % j == 0)
                    {
                        prime = 0;
                        break;
                    }
                }
            }

            if(prime)
            {
                lpf = i;
            }
        }
    }

    printf("\nLargest Prime Factor is %d", lpf);

    return 0;
}