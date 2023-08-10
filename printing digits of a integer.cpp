#include<stdio.h>
int main()
{
  int i,n,a[10];
  printf("\nEnter the number:");
  scanf("%d",&n);
  for(i=0;n!=0;i++)
  {
    a[i]=n%10;
    n=n/10;
  }
  n=i;
  printf("\n the digits are:");
  for(i=0;i<n;i++)
  {
    printf("%d\n",a[n-i-1]);
  }
  return 0;
}
