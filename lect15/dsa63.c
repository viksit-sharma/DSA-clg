#include <stdio.h>
void main()
{
    char arr[100];

    scanf("%s", arr);

    int length=0;
    for (int i = 0; 1;i++)
    {
        if(arr[i]!='\0')
        {
            length++;
        }
        else{
            break;
        }
    }
    for (int i = 0; i < length;i++)
    {
        if(arr[i]!=arr[length-1-i])
        {
            printf("Not a palindrome !!!");
            return;
        }
        
    }
    printf("It is palindrome !!!");
}