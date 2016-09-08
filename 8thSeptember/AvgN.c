#include<stdio.h>
//to find the average of first n number
void main()
{
    int n,i,nn;
    float sum=0,avg;
    printf("Enter the value of N:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    avg=sum/n;
    printf("The Average is: %f",avg);
}
