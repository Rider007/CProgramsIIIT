#include <stdio.h>
//To check whether a year is leap year or not
void main()
{
    printf("Enter the year:\n");
    int yr;
    scanf("%d",&yr);
    if(yr%4==0)
    {
        if(yr%100==0)
        {
            if(yr%400==0)
                printf("%d is a leap year",yr);
            else
                printf("%d is not a leap year",yr);
        }
        else
            printf("%d is a leap year",yr);
    }
    else
        printf("%d is not a leap year",yr);
}
