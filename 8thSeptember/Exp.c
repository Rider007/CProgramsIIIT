#include <stdio.h>
// to find the value of exp(x)
void main()
{
    float x,exp,pow;
    int n,i,fact;
    printf("Enter the value x:");
    scanf("%f",&x);
    printf("x=%f\n",x);
    n=100;
    exp=1;
    pow=1;
    fact=1;
    for(i=1;i<=n;i++)
    {
        pow=pow*x;
        fact=fact*i;
        exp=exp+(pow/fact);
    }
    printf("exp(%2.10f)=%2.10f\n",x,exp);
}
