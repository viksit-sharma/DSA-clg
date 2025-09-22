#include <stdio.h>
void printer(int num)
{
    for (int i = num; i > 0;i--)
    {
        for (int k = num; k >= i ;k--)
        {
            printf("* ");
        }
        for (int j = 0; j <= 2*i-1; j++)
        {
            // printf("%c",'  ');
            printf("   ");
        }
        
        for (int p = num; p >= i ;p--)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = 0; i <= num+1;i++)
    {
        for (int k = num; k >= i ;k--)
        {
            printf("* ");
        }
        for (int j = 0; j <= 2*i-1; j++)
        {
            // printf("%c",'  ');
            printf("   ");
        }
        
        for (int p = num; p >= i ;p--)
        {
            printf("* ");
        }
        printf("\n");
    }
}
void main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    // int k = 1;
    printer(num);
}