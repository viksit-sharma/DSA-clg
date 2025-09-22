#include <stdio.h>
void main()
{
    int n;
    
    printf("Enter the value of n : ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n;i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n;i++)
    {
        if(arr[i]!=arr[n-1-i])
        {
            printf("Not a palindrome !!!");
            return;
        }
        
    }
    printf("It is palindrome !!!");
}