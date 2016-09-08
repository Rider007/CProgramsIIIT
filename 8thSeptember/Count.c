#include<stdio.h>
//to count the number of digits in a number
void main()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    int count=0,l=n;
    while(n>0)
    {
        n=n/10;
        count++;
    }
    printf("Number of digits: %d",count);
}
