#include <stdio.h>
//To perform arithmetic operations using switch case
void main()
{
    printf("Enter 1 for Addition\n");
    printf("Enter 2 for Subtraction\n");
    printf("Enter 3 for Multiplication\n");
    printf("Enter 4 for Division\n");
    printf("Enter 5 for Remainder\n");
    printf("Enter the Choice:\n");
    int choice,num1,num2,res;
    scanf("%d",&choice);
    printf("Enter the numbers:\n");
    scanf("%d%d",&num1,&num2);
    switch(choice)
    {
        case 1: res=num1+num2;
                break;
        case 2: res=num1-num2;
                break;
        case 3: res=num1*num2;
                break;
        case 4: res=num1/num2;
                break;
        case 5: res=num1%num2;
                break;
        default:printf("Wrong choice entered");
                break;
    }
    printf("The Result: %d",res);

}
