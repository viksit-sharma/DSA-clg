#include<stdio.h>
void main() {
    int arr[] = {1, 2, 3, 4};
    int *p = arr;
    for (int i = 0; i < 4;i++)
    {
        printf("%d ", *p + i);
    }
    printf("\n");
    for (int i = 3; i >= 0;i--)
    {
        printf("%d ", *p + i);
    }
}