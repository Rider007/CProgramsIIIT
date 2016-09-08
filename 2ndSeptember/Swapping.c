#include <stdio.h>
//To swap the values of two variables
void main()
{
    printf("Enter the number\n");
    int a,b,c;
    scanf("%d%d",&a,&b);
    printf("a:%d,b:%d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("a:%d,b:%d",a,b);

}
