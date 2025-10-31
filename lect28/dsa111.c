#include <stdio.h>
void main()
{
    int arr[] = {1, 3, 5, 7, 4, 9, 8, 2, 4};
    int freq[9] = {0};
    int max = -10000;
    for (int i = 0; i < 9; i++)
    {
        freq[arr[i]]++;
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    int j = 0;
    for (int i = 0; i <= max; i++)
    {
        while (freq[i] > 0)
        {
            arr[j] = i;
            j++;
            freq[i]--;
        }
    }
    for (int i = 0; i < 9; i++)
    {
        printf("%d ", arr[i]);
    }
}