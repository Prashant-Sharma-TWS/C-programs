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
        sum = (sum * 10) + rem;
        copy = copy / 10;
    }
    if (sum == number)
    {
        printf("%d is a Palindrome number", number);
    }
    else
    {
        printf("%d is not a Palindrome number", number);
    }
}
