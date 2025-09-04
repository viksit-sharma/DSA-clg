#include <stdio.h>
void main()
{
    int num,count=0;

    printf("Enter a No. : ");
    scanf("%d",&num);
    
    while(num>=0)
    {
        
    if(num==0)
    {
        printf("Digits is :  1");
        return;
    }      

    num = num / 10;
    count++;
    }
    printf("digits are : %d\n",count);
}