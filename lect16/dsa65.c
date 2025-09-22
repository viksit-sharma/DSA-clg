#include <stdio.h>
void main()
{
    int arr[6];
    printf("Enter 6 elements : ");
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Before sorting : ");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }
    int j = 0;
    while (j < 5)
    {
        for (int i = j + 1; i < 6; i++)
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
    printf("\nAfter sorting : ");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }
}