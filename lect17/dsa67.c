#include <stdio.h>
void swap(int *x, int *y)
{
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}
void main()
{
    int x = 10, y = 20;
    printf("Before swapping : %d and %d\n", x, y);
    swap(&x, &y);
    printf("After swapping : %d and %d", x, y);
}