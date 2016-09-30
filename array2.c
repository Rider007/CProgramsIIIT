#include<stdio.h>

void main()
{
    int n,i,h1=0,h2=0;
    printf("Enter the number of elements of the array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    if(a[0]>a[1])
    {
        h1=a[0];
        h2=a[1];
    }
    else
    {
        h1=a[1];
        h2=a[0];
    }
    for(i=2;i<n;i++)
    {
        if(a[i]>h1)
        {
            h2=h1;
            h1=a[i];
        }
        else if(a[i]>h2)
        {
            h2=a[i];
        }
    }
    printf("2nd highest: %d",h2);

}
