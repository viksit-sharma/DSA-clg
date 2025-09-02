#include <stdio.h>
void main()
{
    int num;
    printf("Enter a No.");
    scanf("%d",&num);
    if(num%2==0)
        {
            printf("No is even\n");
        }
        else{
            printf("No is odd\n");
        }
    for (int i=1,j=10; i <= 10,j>=1;i++,j--)
    {
        printf("%d\t",num*i);
        printf("%d\n",num*j);
    }
}