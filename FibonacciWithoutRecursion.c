#include <stdio.h>

void main()
{
    int a = 0, b = 1;

    printf("%d\n%d\n", a, b);

    for (int i = 0; i <= 5; i++)
    {
        int num = a + b;

        printf("%d\n", num);

        a = b;
        b = num;
    }
}