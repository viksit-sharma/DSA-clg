#include <stdio.h>
void main()
{
    int num1, num2;
    char choice;

    printf("Enter First No.: ");
    scanf("%d", &num1);
    printf("Enter Second No.: ");
    scanf("%d", &num2);
    printf("Enter Operator : ");
    scanf(" %c", &choice);

    if(choice =='+')
    {
        printf("Sum is %d", num1 + num2);
    }
    else if(choice =='-')
    {
        printf("Subtraction is %d", num1 - num2);
    }
    else if(choice =='*')
    {
        printf("Multipication is %d", num1 * num2);
    }
    else if(choice =='/')
    {
        printf("Division is %d", num1 / num2);
    }
    else{
        printf("Invalid choice\n");
    }
}
