#include <stdio.h>
#include <string.h>
void main() {
    char str[20];
    scanf("%s", str);
    int cons = 0;
    int vow = 0;
    for (int i = 0; i < strlen(str); i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            vow++;
        }
        else{
            cons++;
        }
    }
    printf("Consonants are : %d\nVowels are : %d", cons, vow);
}