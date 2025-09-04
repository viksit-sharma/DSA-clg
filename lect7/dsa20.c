#include <stdio.h>
void main()
{
    int pre = 0, post = 1,num;

    printf("Enter A no. ");
    scanf("%d", &num);

    printf("---Fabonachi series---\n");
    printf(" by for loop : \n");

    // if(num==1||num==2)
    // {
    //     printf("%d ", pre);
    //     printf("%d ", post);
    // }
    // else if(num>2)
    // {
    for (int i = 1; i <= num; i++)
    {
        printf("%d ", pre);
                int val = pre + post;
                pre = post;
                post = val;
    }            
            // }
    printf("\n by while loop : \n");

    int i=1;
    pre = 0, post = 1;
    while(i<=num)
    {
        printf("%d ", pre);
        int val = pre + post;
        pre = post;
        post = val;
        i++; 
    }
    printf("\n by do while loop : \n");

    i = 1;
    pre = 0, post = 1;
    do
    {
        printf("%d ", pre);
        int val = pre + post;
        pre = post;
        post = val;
        i++; 
    } while (i<=num);
            
}