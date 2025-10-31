#include <stdio.h>
int binarySer(int start, int end, int arr[], int target)
{
    int mid = start + (end - start) / 2;
    if (arr[mid] == target)
    {
        return mid;
    }
    else if (target < mid)
    {
        return binarySer(start, mid - 1, arr, target);
    }
    else if (target > mid)
    {
        return binarySer(mid + 1, end, arr, target);
    }
    else if (start >= end)
    {
        return 0;
    }
}
void main()
{
    int start, end, target;
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    start = 0;
    end = 6;
    target = 6;
    int result = binarySer(start, end, arr, target);
    if (result == 0)
    {
        printf("Element not found");
    }
    else
    {
        printf("The element found at index %d", result);
    }
}