#include<stdio.h>
int LinearSearch(int A[],int,int);

int main()
{
    int A[50],n,x,h,s,t,i;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        printf("Enter the element number %d \n",(i+1));
        scanf("%d",&A[i]);
    }
    printf("Enter the number to be searched\n");
    scanf("%d",&x);
    t=LinearSearch(A,n,x);
    if(t!=-1)
    {
        h=A[t];
        s=A[t];
        for(i=0;i<n;i++)
        {
            if(A[i]>h)
                h=A[i];
            if(A[i]<s)
                s=A[i];
        }
        if(h==A[t])
            printf("%d is the largest found at %d",h,t);
        else if (s==A[t])
            printf("%d is the smallest found at %d",s,t);
        else
            printf("%d is neither smallest nor largest\n",A[t]);
    }
    else
        printf("Number not found!!");
    return 0;
}
int LinearSearch(int A[],int n,int x)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(A[i]==x)
            return i;
    }
    return -1;
}
