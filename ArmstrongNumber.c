#include <stdio.h>

void main()
{
    int number, copy, rem, sum = 0;

    printf("Enter the number: ");
    scanf("%d", &number);

    copy = number;
    while (copy > 0)
    {
        rem = copy % 10;
        copy = copy / 10;

        sum = sum + (rem * rem * rem);
    }
    if (sum == number)
    {
        printf("%d is a Armstrong number", number);
    }
    else
    {
        printf("%d is not a Armstrong number", number);
    }
}