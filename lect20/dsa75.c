#include <stdio.h>
void main()
{
    char str[20];
    scanf("%s", str);

    int len = 1;
    for (int i = 0; str[i] != '\0'; i++)
    {
        len++;
    }

    for (int i = len; i > -1; i--)
    {
        printf("%c", str[i]);
    }
}