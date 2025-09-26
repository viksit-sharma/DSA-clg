#include <stdio.h>
void main(){
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int arrv[3][3];
    for (int i = 0; i < 3;i++){
        for (int j = 0,k=2; i < 3,k>=0;j++,k--){
            arrv[k][i] = arr[j][i];
            printf("arrv[%d][%d] = arr[%d][%d]\n", k, i, i, j);
        }
    }
    for (int i = 0; i < 3;i++){
        for (int j = 0,k=2; i < 3,k>=0;j++,k--){
            printf("%d ", arrv[i][j]);        
        }
        printf("\n");
    }
}