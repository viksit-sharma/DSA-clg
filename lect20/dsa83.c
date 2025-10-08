//repeats letter if it is more than 2 times
#include <stdio.h>
#include <string.h>
void main() {
        char str[20];
    scanf("%s", str);
    for (int i = 0; i < strlen(str); i++){
        int count = 0;
        for (int j = i; j < strlen(str); j++){
            if(str[i]==str[j]){
                count++;
            }
        }
        if(count>0){
            printf("%c --> %d\n", str[i], count);
        }
    }
}