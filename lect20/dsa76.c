#include <stdio.h>
void main() {
    char str[20];
    scanf("%s", str);

    char strCpy[20];
    for (int i = 0; str[i] !='\0';i++){
        strCpy[i] = str[i];
    }
    for (int i = 0; str[i] !='\0';i++){
        printf("%c", strCpy[i]);
    }
}