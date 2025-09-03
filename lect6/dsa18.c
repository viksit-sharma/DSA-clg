#include <stdio.h>
void main()
{
    int num,fc=1;
    printf("Enter A no. ");
    scanf("%d", &num);
    for (int i = 1; i <= num;i++)
    {
        fc = fc * i;
    }
    printf("factorial of %d is %d", num, fc);
}