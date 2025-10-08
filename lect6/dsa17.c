#include <stdio.h>
void main()
{
    int num;

    printf("Enter A no. ");
    scanf("%d", &num);

    int len = 0;

    if (num == 1 || num == 0)
    {
        len++;
    }
    for (int i = num / 2; i > 1; i--)
    {
        if (num % i == 0)
        {
            len++;
        }
    }
    if (!len)
    {
        printf("Number is prime ");
    }
    else
    {
        printf("Number is not prime");
    }
}
