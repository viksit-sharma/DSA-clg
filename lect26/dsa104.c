#include <stdio.h>
void main()
{
    unsigned long long int num;
    printf("-----DECIMAL TO BINARY-----\n");
    printf("Enter a number : ");
    scanf("%lld", &num);
    unsigned long long int bin = 0;
    while (num > 0)
    {
        int rem = num % 2;
        bin = bin * 10 + rem;
        num /= 2;
    }
    unsigned long long int bina = 0;
    while (bin > 0)
    {
        int rem = bin % 10;
        bina = bina * 10 + rem;
        bin /= 10;
    }
    printf("The binary is : %d", bina);
}