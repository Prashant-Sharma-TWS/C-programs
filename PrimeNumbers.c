#include <stdio.h>

void main()
{
    int number, flag = 1;

    printf("Enter the number: ");
    scanf("%d", &number);

    for (int loop = 2; loop < number; loop++)
    {
        if ((number % loop) == 0)
        {
            flag = 0;
        }
    }

    if (flag == 1)
    {
        printf("%d is a prime number ", number);
    }
    else
    {
        printf("%d is not a prime number ", number);
    }
}