#include <stdio.h>
void main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    int l = 65;
    for (int a = 0; a < num-1; a++)
    {
        for (int b = num; b > a+1;b--)
        {
            printf("  ");
        }
        for (int c = 0; c < 2*a + 1;c++)
        { if(c==0||c==2*a)
            {
                printf("%c ",'*');
            }
            else{
                printf("%c ",l++);
            }
        }
        printf("\n");
    }
    int L = 65;
    for (int i = num; i > 0;i--)
    {
        for (int k = num; k > i ;k--)
        {
            printf("  ");
        }
        for (int j = 0; j < 2*i-1; j++)
        {
            if(j==0||j==2*i-2)
            {
                printf("%c ",'*');
            }
            else{
                printf("%c ",L++);
            }
        }
        printf("\n");
    }
}