#include <stdio.h>
void main()
{
    int num,rev=0,lastDig;

    printf("Enter A no. ");
    scanf("%d", &num);

    int numOg = num;
    
    while(num>0)
    {
        lastDig = num % 10;
        rev = rev*10 + lastDig;
        num = num / 10;
    }
            printf("%d  %d\n", rev,numOg);
            
            if(rev==numOg)
            {
                printf("The number is palindrom ");
            }
            else{
                printf("The number is not palindrom");
            }
    
}