#include <stdio.h> 
void main()
{
    int arr[10] = {1, 9, 6, 7, 2, 4, 8, 4, 5};

    int k = 3;

    int windowSum = 0;
    for (int i = 0; i < k;i++)
    {
        windowSum = windowSum + arr[i];
    }
    int maxSum = windowSum;
    for (int i = k; i < 10;i++)
    {
        windowSum = windowSum - arr[i - k] + arr[i];
        if(maxSum < windowSum)
        {
            maxSum = windowSum;
        }
    }
    printf("%d", maxSum);
}