#include <stdio.h>
void main()
{
    // int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // int sum = 0;
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         sum += arr[i][j];
    //     }
    // }
    // printf("%d", sum);
    // int num = 121;
    // int Num = num;
    // int rev;
    // while(num>0)
    // {
    //     int lastdigit = num % 10;
    //     rev = rev * 10 + lastdigit;
    //     num = num / 10;
    // }
    // // printf("%d", rev);
    // if(rev==Num)
    // {
    //     printf("it is palindrome!!!");
    // }
    // else {
    //     printf("not palindrome!!!");
    // }
    int num = 15457;
    if(num>=2)
    {
    for (int i = 2; i <= num / 2;i++)
        {
            if(num%i==0)
            {
                printf("Number is not prime");
                return;
            }
        }
    printf("Number is prime");
    }
    else if(num==1){
        printf("Neither prime nor composite");
    }
    else{
        printf("Invalid number GM");
    }
}