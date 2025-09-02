#include <stdio.h>
#include <string.h>

void main()
{
    int bal=1000000, wid, dep, choice;

    char pass[20];

    printf("Enter pass: ");
    scanf("%s", pass);

    if(strcmp(pass, "global@123") == 0)
    {
        printf("Access granted\n");
        printf("Enter 1 to check balance \nEnter 2 to withdraw \nEnter 3 to deposite\nEnter 4 to exit\n");
    scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nYour current balance is : %d",bal);
                break;
            case 2:
                printf("\nEnter Amount to be Withdrawn : ");
                scanf("%d", &wid);
                bal = bal - wid;
                printf("Amount withdrawn successfully !!!\nNow your current balance is : %d",bal);
                break;
            case 3:
                printf("\nEnter Amount to be Deposited : ");
                scanf("%d", &dep);
                bal = bal + dep;
                printf("Amount deposited successfully !!!\nNow your current balance is : %d",bal);
                break;
            default:
                printf("Invalid Choice\n");
        }
    }
    else
    {
        printf("Access denied\n");
    }
}