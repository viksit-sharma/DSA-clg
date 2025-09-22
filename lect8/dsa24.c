#include <stdio.h>
void main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    
    // int k = 1;
    for (int i = num; i > 0;i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
            // k++;
        }
        printf("\n");
    }
}