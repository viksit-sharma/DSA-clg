#include <stdio.h>
#include <string.h>

void main()
{
    char pass[20];

    printf("Enter pass: ");
    scanf("%s", pass);

    if(strcmp(pass, "global@123") == 0)
    {
        printf("Access granted\n");
    }
    else
    {
        printf("Access denied\n");
    }
}