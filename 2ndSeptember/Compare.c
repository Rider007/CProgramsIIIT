#include <stdio.h>
//To compare three numbers
void main()
{
    printf("Enter three numbers:\n");
    int num1,num2,num3;
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>num2)
    {
        if(num1>num3)
            printf("%d is Greatest",num1);
        else
            printf("%d is Greatest",num3);
    }
    else
    {
        if(num2>num3)
            printf("%d is Greatest",num2);
        else
            printf("%d is Greatest",num3);
    }
}
