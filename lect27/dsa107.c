#include <stdio.h>

void main()
{
    int arr[] = {3, 6, 2, 1, 8, 7, 4, 5, 3, 1};
    int freq[10] = {0}; // 0,2,1,2,1,1,1,1,1
    int max = -10000;
    for (int i = 0; i < 10; i++)
    {
        int index = arr[i];
        freq[index]++;
        max = max > arr[i] ? max : arr[i];
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", freq[i]);
    }
    printf("\n");
    int j = 9;
    for (int i = 0; i <= max; i++)
    {
        while (freq[i] > 0 && j >= 0)
        {
            arr[j] = i;
            j--;
            freq[i]--;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
}

// void main()
// {
//     int arr[] = {3, 6, 2, 1, 8, 7, 4, 5, 3, 1};

//     for (int i = 1; i < 10; i++)
//     {
//         int t = arr[i];
//         int j = i - 1;
//         while (j >= 0 && arr[j] < t)
//         {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = t;
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d ", arr[i]);
//     }
// }

// void main()
// {
//     int arr[] = {3, 6, 2, 1, 8, 7, 4, 5, 3, 1};

//     for (int i = 0; i < 10; i++)
//     {
//         int max = -10000;
//         int index;
//         for (int j = i; j < 10; j++)
//         {
//             if (max < arr[j])
//             {
//                 max = arr[j];

//                 index = j;
//             }
//         }
//         for (int k = index; k > i; k--)
//         {
//             arr[k] = arr[k - 1];
//         }
//         arr[i] = max;
//         printf("\n");
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d ", arr[i]);
//     }
// }

// void main()
// {
//     int arr[] = {3, 6, 2, 1, 8, 7, 4, 5, 3, 1};

//     for (int i = 0; i < 10; i++)
//     {
//         for (int j = i + 1; j < 10; j++)
//         {
//             if (arr[i] < arr[j])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[i];
//                 arr[i] = temp;
//             }
//         }
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d ", arr[i]);
//     }
// }