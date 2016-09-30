#include<stdio.h>

void main()
{
    int n,m,i=0,j=0,b=0;
    printf("Enter the number of rows and columns:\n");
    scanf("%d%d",&n,&m);
    printf("Enter the elements in the array:\n");
    int a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        scanf("%d",&a[i][j]);
    }
    printf("The matrix is:\n");
    for(i=0;i<n;i++)
    {
         for(j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
            b=b+a[i][j];
        }
        printf("\n");
    }
    printf("The sum of all the elements: %d",b);
}


