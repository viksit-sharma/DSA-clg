#include <stdio.h>
#include <math.h>
void main()
{
    int num=256, sum=0,i=1;

    printf("Enter a No.");
    scanf("%d",&num);
    while(num>0)
    {
        int lastdig = num % 10;
        sum += lastdig;
        // num = num - lastdig;
        num = num / 10;
        i = i * 10;
    }
    printf("Sum is : %d\n",sum);
}