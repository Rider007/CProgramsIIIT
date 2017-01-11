#include <stdio.h>
void insertbegin(int A[],int *s,int x);
void insertend(int A[],int *,int x);
void insertindex(int A[],int *,int x,int index);
void display(int A[],int s);
int main()
{
    int A[50],x,in,n,i,ch;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        printf("Enter the element number %d ",(i+1));
        scanf("%d",&A[i]);
    }
    printf("Enter the number to be entered \n");
    scanf("%d",&x);
    printf("\nEnter 1 for at the begin");
    printf("\nEnter 2 for at the end");
    printf("\nEnter 3 for at the index");
    printf("Enter the choice:\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: insertbegin(A,&n,x);
                break;
        case 2: insertend(A,&n,x);
                break;
        case 3: printf("Enter the index:\n");
                scanf("%d",&in);
                insertindex(A,&n,x,in);
                break;
        default: printf("Wrong Choice");
                break;
    }
    printf("The changed array");
    for(i=0;i<n;i++)
    {
        printf(" %d ",A[i]);
    }
    return 0;
}

void insertbegin(int A[],int *size,int x)
{
    int i,l=*size;
    for(i=l-1;i>=0;i--)
        A[i+1]=A[i];
    A[0]=x;
    *size=*size+1;
}
void insertend(int A[],int *size,int x)
{
    A[*size]=x;
    *size = *size+1;
}
void insertindex(int A[],int *size,int x,int index)
{
    int i,l=*size;
    for(i=l-1;i>index;i--)
        A[i+1]=A[i];
    A[index]=x;
    *size=*size+1;
}
