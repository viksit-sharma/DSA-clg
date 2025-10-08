#include <stdio.h>
void main()
{
    char str[20];
    scanf("%s", str);

    int len = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            printf("Not palindrom");
            return;
        }
    }
    printf("Is palindrome");
}