#include <stdio.h>
void main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    int l = 65;
    for (int a = 0; a < num; a++)
    {
        for (int b = num; b > a+1;b--)
        {
            printf(" ");
        }
        for (int c = 0; c < 2*a + 1;c++)
        {
             printf("%c",l++);
        }
        printf("\n");
    }
}