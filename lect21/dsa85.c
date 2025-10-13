#include <stdio.h>
#include <string.h>
void main() {
    char str[] = "hello";
    char target = 'o';
    for (int i = 0; i < strlen(str);i++) {
        if(target==str[i]){
            for (int j = i; str[j] != '\0';j++){
                str[j] = str[j + 1];
            }
            printf("%s", str);
            return;
        }
    }
}