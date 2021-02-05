#include <stdio.h>
#include <string.h> //for using string function

int main()
{
    char string[] = {"TechWebShow"}; //change the string as you want

    int i, length, flag = 0;
    length = strlen(string);

    for (i = 0; i < length; i++)
    {
        if (string[i] != string[length - i - 1])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("%s is not a palindrome", string);
    }
    else
    {
        printf("%s is a palindrome", string);
    }
    return 0;
}
