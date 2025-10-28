#include <stdio.h>
void main()
{
    int arr[] = {7, 6, 4, 3, 1};
    int buy = arr[0];
    int maxProfit = 0;
    for (int i = 1; i < 5; i++)
    {
        if (buy < arr[i])
        {
            int profit = arr[i] - buy;
            maxProfit = (maxProfit > profit ? maxProfit : profit);
        }
        else
        {
            buy = arr[i];
        }
    }
    printf("%d", maxProfit);
}