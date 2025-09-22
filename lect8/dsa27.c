#include <stdio.h>
void main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    
    for (int a = 0; a < num; a++)
    {
        for (int b = num; b > a+1;b--)
        {
            printf(" ");
        }
        for (int c = 0; c < a + 1;c++)
        {
             printf("*");
        }
        printf("\n");
    }
}