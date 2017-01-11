#include<stdio.h>
void deletebegin(int A[],int *n);
void deleteend(int A[],int *n);

int main()
{
    int A[50],n,i,ch;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        printf("Enter the element number %d ",(i+1));
        scanf("%d",&A[i]);
    }
    printf("\nEnter 1 for at the begin");
    printf("\nEnter 2 for at the end");le
    printf("Enter the choice:\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: deletebegin(A,&n);
                break;
        case 2: deleteend(A,&n);
                break;
        default:printf("Wrong Choice");
                break;
    }
    printf("The changed array");
    for(i=0;i<n;i++)
    {
        printf(" %d ",A[i]);
    }
    return 0;
}

void deletebegin(int A[],int *n)
{
    int l=*n,i;
    for(i=1;i<l;i++)
        A[i-1]=A[i];
    *n=*n-1;
}

void deleteend(int A[],int *n)
{
    *n=*n-1;
}
