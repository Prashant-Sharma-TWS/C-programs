#include <stdio.h>

int main()
{
    int number, factorial = 1;

    printf("Enter the number: ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        factorial = factorial * i;
    }
    printf("\n Factorial of %d is: %d", number, factorial);
}