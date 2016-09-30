#include<stdio.h>

void main()
{
    int n,i=0;
    printf("Enter the number of elements in the array:\n");
    scanf("%d",&n);
    printf("Enter the elements in the array:\n");
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Array in reverse\n");
    for(i=n-1;i>=0;i--)
        printf("%d ",a[i]);
}
