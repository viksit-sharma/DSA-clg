#include <stdio.h>
#include <string.h>
void main() {
    char str[20];
    scanf("%s", str);
    char st[] = "aeiouAEIOU";
    char strr[] = "cdfghjklmnpqrstvwxyzCDFGHJKLMNPQRSTVWXYZ";
    int cons = 0;
    int vow = 0;
    int len;
    if(strlen(str)>strlen(st)){
        len = strlen(str);
    }
    else{
        len = strlen(st);
    }
    for (int i = 0; i < strlen(str); i++){
        for (int j = 0; j < strlen(st); j++){
            if(str[i]==st[j]){
            vow++;
        }
        else if(str[i]==strr[j]){
            cons++;
        }
        }
    }
    printf("Consonants are : %d\nVowels are : %d", cons, vow);
}