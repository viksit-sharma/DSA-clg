#include <stdio.h>
int checkSort(int arr[], int prev, int next, int size)
{
    if (next == size)
    {
        return 1;
    }
    else if (arr[next] > arr[prev])
    {
        return checkSort(arr, prev + 1, next + 1, size);
    }
    else if (arr[next] < arr[prev])
    {
        return 0;
    }
}
void main()
{
    int arr[] = {0, 1, 2, 4, 6, 10, 9};
    int prev = 0;
    int next = 1;
    int size = 7;
    int result = checkSort(arr, prev, next, size);
    if (result == 1)
    {
        printf("Sorted");
    }
    else
    {
        printf("Not sorted");
    }
}