#include <stdio.h>
void main()
{
    int num=5;
    printf("Enter a number : ");
    scanf("%d", &num);
    // int k = 1;
    for (int i = num; i > 0;i--)
    {
        for (int j = 0; j <= i;j++)
        {
            printf(" ");
        }
        for (int k = num; k >= 2 * i - 1;k--)
        {
            printf("*");
        }
            printf("\n");

    }
}