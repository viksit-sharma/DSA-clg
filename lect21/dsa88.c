#include <stdio.h>
#include <string.h>
void main() {

    char str1[] = "rupesh";
    char str2[] = "mukesh";
    for (int i = 0; i < strlen(str1);i++){
        for (int j = 0; j < strlen(str2);j++){
            if(str1[i]==str2[j]){
                printf("%c", str1[i]);
            }
        }
    }
}