#include <stdio.h>

void main()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    int i=0;
    printf("The divisors are:\n");
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            printf("%d\n",i);
    }
}
