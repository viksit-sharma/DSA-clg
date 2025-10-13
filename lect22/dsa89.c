#include <stdio.h>

void main() {
    int arr[] = {-3, 2, -2, -1, 3, 1};
    int neg[3];
    int pos[3];
    int sort[6];

    int j = 0;
    int k = 0;
    for (int i = 0; i < 6;i++){
        if(arr[i]<0){
            neg[j] = arr[i];
            j++;
        }
        else if(arr[i]>0){
            pos[k] = arr[i];
            k++;
        }
    }
    for (int i = 0; i < 3;i++){
        sort[i] = neg[i];
    }
    for (int i = 3,j=0; i < 6;j++,i++){
        sort[i] = pos[j];
    }
    for (int i = 0; i < 6;i++){
        printf("%d ", sort[i]);
    }
}