#include <stdio.h>
void main()
{
    int num1,num2;
    printf("Enter Two No.s : ");
    scanf("%d %d", &num1, &num2);

    if(num1>num2)
    {
        printf("First No. is Greater");
    }
    else if(num1<num2)
    {
        printf("Second No. is Greater");
    }
}