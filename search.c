#include<stdio.h>

void main()
{
    int n,flag=0,i=0,in=0,n1=0;
    printf("Enter the number of elements in the array:\n");
    scanf("%d",&n);
    printf("Enter the elements in the array:\n");
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter the number to be searched:\n");
    scanf("%d",&n1);
    for(i=0;i<n;i++)
    {
        if(a[i]==n1)
        {
            in=i;
            flag=1;
            break;
        }
    }
    if(flag)
        printf("Position of %d is : %d ",n1,(in+1));
    else
        printf("Number not found");
}
