#include <stdio.h>
#include <string.h>
void main() {
    char str[20];
    scanf("%s", str);
    int len = strlen(str);
    
    for (int i = 0; i < len ; i++){
        int count = 0;
        for (int j = i + 1; j < len; j++){
            if(str[i]==str[j]){
                count++;
            }
        }
        if(count==0){
            printf("%c",str[i]);
        }
    }
}
