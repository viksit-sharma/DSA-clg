#include <stdio.h>
void main()
{
    int att;
    int marks;

    printf("Enter Attendence and Marks : ");
    scanf("%d%d", &att, &marks);

    if(att>=75&&marks>=75)
    {
        printf("A");
    }
    else if(att>=75&&marks<75&&marks>=65) 
    {
        printf("B");
    }
    else if(att>=75&&marks<65&&marks>=55) 
    {
        printf("C");
    }
    else if(att>=75&&marks<55&&marks>=45) 
    {
        printf("D");
    }
    else if(att>=75&&marks<45&&marks>=30) 
    {
        printf("E");
    }
    else  
    {
        printf("FAIL");
    }
}