#include <stdio.h>
#include <string.h>
void main() {
    char str[] = "ababed";
    int freq[256] = {0};
    for (int i = 0; i < strlen(str); i++)
    {
        freq[str[i]]++;
    }
    // for (int i = 0; i < 256; i++)
    // {
    //     if (freq[i] > 0)
    //     {
    //         printf("%c -> %d\n", i, freq[i]);
    //     }
    // }
    int i = 0;
    while(i<256){
        if(freq[i]==1){
            printf("%c", i);
            return;
        }
        i++;
    }
}