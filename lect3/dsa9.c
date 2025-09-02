#include <stdio.h>
void main()
{
    int num;

    printf("Enter a No. : ");
    scanf("%d", &num);

    switch(num)
    {
        case 1:
            printf("Hello");
            break;

        case 2:
            printf("Hii");
            break;

        case 3:
            printf("Hey");
            break;
            
        default:
            printf("Hehehe");
    }
}