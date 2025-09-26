#include <stdio.h>
void main(){
    int arr[] = {-2, 6, -7, 9, 3, 4, -5};
    int k = 2;
    int winSum=0;
    for (int i = 0; i < k;i++){
        winSum = winSum + arr[i];
    }
    int maxSum = winSum;
    for (int i = k; i < 7;i++){
        winSum = winSum + arr[i] - arr[i - k];
        if(winSum>maxSum){
            maxSum = winSum;
        }
    }
    printf("%d", maxSum);
}