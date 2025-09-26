#include <stdio.h>
void main(){
    int n;
    int twoD[3][3];
    int oneD[6];
    printf("Enter 9 elements : \n");
    for (int i = 0; i < 3;i++){
        for (int j = 0; j < 3;j++){
            scanf("%d", twoD[i][j]);
        }
    }

        int k = 0;
    for (int i = 0; i < 3;i++){
        for (int j = 0; j < 3;j++){
            oneD[k] = twoD[i][j];
            k++;
        }
    }
    for (int i = 0; i < 9;i++){
        printf("%d ", oneD[i]);
    }
} 