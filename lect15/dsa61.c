#include <stdio.h>
void main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n;i++)
    {
        scanf("%d", &arr[i]);
    }
    int cont = arr[0];
    printf("The values before shiftng : ");
    for (int i = 0; i < n;i++)
    {
        printf("%d ", arr[i]);
    }
    for (int i = 1; i < n;i++)
    {
        arr[i - 1] = arr[i];
    }
    printf("\n");
    printf("The values after shiftng : ");
    arr[n-1] = cont;
    for (int i = 0; i < n;i++)
    {
        printf("%d ", arr[i]);
    }
}
