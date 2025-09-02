#include <stdio.h>
void main()
{
    float rs, dl=87.85,yen=0.5981,dinar=286.25;

    int curr;

    printf("Enter 1 to convert from Rs. to Dollar \nEnter 2 to convert from Rs. to Yen \nEnter 3 to convert from Rs. to Dinar\n ");
    scanf("%d", &curr);

    printf("Enter Rupee : ");
    scanf("%f", &rs);

    switch(curr)
    {
        case 1:
            printf("%.2f Rs. is %.2f USD",rs, rs/dl);
            break;
        case 2:
            printf("%.2f Rs. is %.2f YEN",rs, rs/yen);
            break;
        case 3:
            printf("%.2f Rs. is %.2f DINAR",rs, rs/dinar);
            break;
        default:
            printf("Invalid input\n");
    }
}