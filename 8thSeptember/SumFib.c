#include<stdio.h>

void main()
{
    int a=0,b=1,c,sum=0,n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    c=a+b;
    int i=1;
    for(i=2;i<=n;i++)
    {
        sum=sum+c;
        c=a+b;
        a=b;
        b=c;

    }
    printf("The sum is :%d",sum);

}
