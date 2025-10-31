#include <stdio.h>
int palindrome(int arr[], int start, int end)
{
    if (arr[start] == arr[end])
    {
        return palindrome(arr, start + 1, end - 1);
    }
    else if (start >= end)
    {
        return 1;
    }
    return -1;
}
void main()
{
    int arr[] = {4, 3, 5, 3, 4};

    int result = palindrome(arr, 0, 4);
    if (result == 1)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
}