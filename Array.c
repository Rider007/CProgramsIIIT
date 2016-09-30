#include <stdio.h>

void main()
{
  int n,i,h,l;
  printf("Enter the number of elements");
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i] );
  }
  h=l=a[0];
  for(i=1;i<n;i++)
  {
    if(a[i]>h)
    h=a[i];
    if(a[i]<l)
    l=a[i];
  }
  printf("The Highest is: %d\n The Lowest is:%d",h,l);
}
