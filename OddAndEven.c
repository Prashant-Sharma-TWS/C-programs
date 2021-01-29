#include <stdio.h>

void main()
{
    int n;

    printf("Enter the range upto which you want odd and even no.: ");
    scanf("%d", &n);

    // For printing odd number

    printf("Odd numbers are: \n");
    for (int i = 0; i <= n; i++)
    {
        if ((i % 2) != 0)
        {
            printf("%d\t", i);
        }
    }

    printf("\n");

    //For printing even number

    printf("Odd numbers are: \n");
    for (int i = 0; i <= n; i++)
    {
        if ((i % 2) == 0)
        {
            printf("%d\t", i);
        }
    }
}