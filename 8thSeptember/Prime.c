#include<stdio.h>
//to check whether a number is Prime or not
void main()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    int i,f=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            f++;
    }
    if(f==2)
        printf("%d is a prime number",n);
    else
        printf("%d is not a prime number",n);
}
