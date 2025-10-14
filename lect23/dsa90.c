#include <string.h>
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n;
    printf("Enter Size : ");
    scanf("%d", &n);

    // int *arr = (int *)malloc(n * sizeof(int));
    // int *arrc = (int *)malloc(n * sizeof(int));
    int *arr = (int *)calloc(n , sizeof(int));
    int *arrc = (int *)calloc(n , sizeof(int));
    

    printf("Enter %d elements : ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Entered elements : \n", n);
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    /*int *zero = (int *)malloc(n * sizeof(int));
    int *neg = (int *)malloc(n * sizeof(int));
    int *pos = (int *)malloc(n * sizeof(int));
    int zero[10];
    int neg[10];
    int pos[10];
    int l = 0, j = 0, k = 0, cz = 0, cn = 0, cp = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zero[l] = arr[i];
            l++;
            cz++;
        }
        else if (arr[i] < 0)
        {
            neg[j] = arr[i];
            j++;
            cn++;
        }
        else
        {
            pos[k] = arr[i];
            k++;
            cp++;
        }
    }
    int i = 0;
    for (int j = 0; j < cz; i++)
    {
        arr[i] = zero[j];
        j++;
    }
    free(zero);
    for (int j = 0; j < cn; j++)
    {
        arr[i] = neg[j];
        i++;
    }
    free(neg);
    for (int j = 0; j < cp; j++)
    {
        arr[i] = pos[j];
        i++;
    }
    free(pos);
    printf("Sorted elements : \n", n);

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    free(arr);
    */
    int j = 0;
    for (int i = 0; i < n; i++){
        if(arr[i]==0){
            arrc[j] = arr[i];
            j++;
        }
    }
    for (int i = 0; i < n; i++){
        if(arr[i]<0){
            arrc[j] = arr[i];
            j++;
        }
    }
    for (int i = 0; i < n; i++){
        if(arr[i]>0){
            arrc[j] = arr[i];
            j++;
        }
    }
    printf("Entered elements : \n", n);
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arrc[i]);
    }
}