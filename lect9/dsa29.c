#include <stdio.h>
void main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    
    int k = 1;
    for (int i = 0; i < num;i++)
    {
        for (int j = 0; j <= i ; j++)
        {
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }
}