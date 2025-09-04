#include <stdio.h>
void main()
{
    int num;

    printf("Enter A no. ");
    scanf("%d", &num);

    int count = 0;

    if(num==1||num==0)
    {
        count++;
    }
    for (int i = num / 2; i > 1;i--)
    {
        if(num%i==0)
        {
            count++;
        }
    }
    if(!count)
    {
        printf("Number is prime ");
    }
    else{
        printf("Number is not prime");
    }
}
