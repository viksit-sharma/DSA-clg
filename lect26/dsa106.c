#include <stdio.h>
#include <limits.h>
void main()
{
    int arr[] = {2, 3, 8, 5, 4, 6, 1};
    int rMax[7];
    int lMax[7];
    int max = INT_MIN;

    for (int i = 0; i < 7; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        rMax[i] = max;
        // printf("%d ", rMax[i]);
    }
    // printf("\n");
    max = INT_MIN;
    for (int i = 6; i > -1; i--)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        lMax[i] = max;
    }
    // for (int i = 0; i < 7; i++)
    // {
    //     // printf("%d ", lMax[i]);
    // }
    // printf("\n");
    int trapWater = 0;
    for (int i = 0; i < 7; i++)
    {
        int min = rMax[i] < lMax[i] ? rMax[i] : lMax[i];

        trapWater = trapWater + min - arr[i];
    }
    printf("The Water that can be Trapped inside given array ");
    for (int i = 0; i < 7; i++)
    {
        if (i == 0)
        {
            printf("{");
        }
        printf("%d", arr[i]);
        if (i != 6)
        {
            printf(",");
        }
        if (i == 6)
        {
            printf("}");
        }
    }
    printf(" is : %d", trapWater);
}