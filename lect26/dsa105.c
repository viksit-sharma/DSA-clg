#include <stdio.h>
void main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    if (num & 1) // bitwise and will give true if the last digit of binary of num will be 1
    {
        printf("The given no is odd");
    }
    else
    {
        printf("The given no is even");
    }
}