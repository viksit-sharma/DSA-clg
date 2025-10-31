#include <stdio.h>
int palindrome(char arr[], int start, int end)
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
    char arr[] = "MALAYaLAM";

    int result = palindrome(arr, 0, 8);
    if (result == 1)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
}
