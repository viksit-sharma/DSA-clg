#include <stdio.h>
void main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    int l = 65;
    for (int i = num; i > 0;i--)
    {
        for (int k = num; k > i ;k--)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("%c",l++);
        }
        printf("\n");
    }
}