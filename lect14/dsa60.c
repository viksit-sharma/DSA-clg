#include <stdio.h>
void main()
{
    int arr[] = {1, 2, 3, 5, 6, 7, 8, 9};

    for (int i=0; i < 8;i++)
    {
        if(arr[i+1] - arr[i]==2)
        {
            printf("The missing number is : %d", arr[i] + 1);
        }
    }
}