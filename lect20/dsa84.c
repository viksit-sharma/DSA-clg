//doesn't repeats ltter even if it is more than 2 times
#include <stdio.h>
#include <string.h>
void main()
{
    char str[20];
    scanf("%s", str);
    int freq[256] = {0};
    for (int i = 0; i < strlen(str); i++)
    {
        freq[str[i]]++;
    }
    for (int i = 0; i < 256; i++)
    {
        if (freq[i] > 0)
        {
            printf("%c -> %d\n", i, freq[i]);
        }
    }
}