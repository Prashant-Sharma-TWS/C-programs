#include <stdio.h>

int printFactorial(int n);
void main()
{
    int number;

    printf("Enter the number: ");
    scanf("%d", &number);

    printFactorial(number);

    printf("%d is the factorial of %d", printFactorial(number), number);
}
int printFactorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        for (int i = 2; i <= n; i++)
        {
            return (n * printFactorial(n - 1));
        }
    }
}