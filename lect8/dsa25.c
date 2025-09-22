#include <stdio.h>
void main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    
    for (int i = num; i > 0;i--)
    {
        for (int j = 0; j < i-1; j++)
        {
            printf(" ");
        }
        for (int k = num; k >= i;k--)
        {
            printf("*");
        }
        printf("\n");
    }
}