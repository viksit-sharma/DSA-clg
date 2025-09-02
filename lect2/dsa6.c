#include <stdio.h>
void main()
{
    int num;
    printf("Enter a No. : ");
    scanf("%d", &num);

    if(num%3==0&&num%5==0)
    {
        printf("Fizz-Buzz");
    }
    else if(num%3==0)
    {
        printf("fizz");
    }
    else if(num%5==0)
    {
        printf("Buzz");
    }
}