#include <stdio.h>
void main()
{
    int n;
    printf("Enter the length of array : ");
    scanf("%d", &n);
    int arr[n];
        for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int j = 0;
    while (j < n-1)
    {
        for (int i = j + 1; i < n; i++)
        {
            if (arr[j] > arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
        j++;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int key;
    printf("Enter the element to find : ");
    scanf(" %d", &key);
    int start = 0;
    int end = n - 1;
    
    while (start < end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            printf("Element %d found at index %d !!!", key, mid);
            return;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
    }
    printf("Element not found !!!");
}