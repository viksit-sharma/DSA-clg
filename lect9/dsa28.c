#include <stdio.h>
void main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    int k = 97;
    for (int i = 0; i < num;i++)
    {
        for (int j = 0; j < num; j++)
        {
            printf("%c",k);
            k++;
        }
        printf("\n");
    }
}