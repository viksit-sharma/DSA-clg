#include <stdio.h>
void main()
{
    int num;
    printf("Enter a No. : ");
    scanf("%d", &num);

    (num > 0 || num < 0) ? printf("Non Zero No.") : printf("Zero No.");
}