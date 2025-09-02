#include <stdio.h>
void main()
{
    int num1, num2,result;

    char choice;

    printf("Enter a No. : ");
    scanf("%d", &num1);
    printf("Enter other No. : ");
    scanf("%d", &num2);
    printf("Enter Choice : ");
    scanf(" %c", &choice);

    switch(choice)
    {
        case '+' :
        printf("Sum is %d", num1 + num2);
        break;
        case '-' :
        printf("Sub is %d", num1 - num2);
        break;
        case '*' :
        printf("Mul is %d", num1 * num2);
        break;
        case '/' :
        {
             if(num2!=0){
        printf("Div is %f", (float)num1 / num2);
        break;
        }
        else{
            printf("Can't Divide by 0");
        }
    }
        
    }
}