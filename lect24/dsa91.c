#include <stdio.h>
#include <math.h>
void main() {
    int arr[] = {1,8,6,2,5,4,8,3,7};
    int areaM = 8 * 1;

    printf("--- TWO POINTER METHOD ---");
    for (int i = 0, j = 9 - 1; i < 9, j > -1; arr[i] < arr[j] ? i++ : j--)
    {
        int w = j - i;
        int h = arr[i] < arr[j] ? arr[i] : arr[j];
        int area = w * h;
        if(areaM<area){
            areaM = area;
        }
    }
    printf(">>> %d", areaM);
    printf("\n--- BRUTE FORCE ---");
    for (int i = 0; i < 9;i++){
        for (int j = i + 1; j < 9;j++){
            int w = j - i;
            int h = arr[i] < arr[j] ? arr[i] : arr[j];
            int area = w * h;
            if(areaM<area){
                areaM = area;
            }
        }
    }
        printf(">>> %d", areaM);
}