#include <stdio.h>
//to print the reverse of a number
void main()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    int rev=0,dg=0,l=n;
    while(n>0)
    {
        dg=n%10;
        rev=rev*10+dg;
        n=n/10;
    }
    printf("Reverse of %d is: %d",l,rev);
}
