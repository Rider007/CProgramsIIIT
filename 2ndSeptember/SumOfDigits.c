#include <stdio.h>
//Sum of the digits of a number
void main()
{
    int num,sum=0,dig,num1;
    printf("Enter the number:\n");
    scanf("%d",&num);
    num1=num;
    dig=num%10;
    sum=sum+dig;
    num=num/10;
    dig=num%10;
    sum=sum+dig;
    num=num/10;
    dig=num%10;
    sum=sum+dig;
    printf("The sum of digits of number %d: %d",num1,sum);
}
