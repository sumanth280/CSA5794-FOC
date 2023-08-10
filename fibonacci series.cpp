#include<stdio.h>
int main()
{
	int n,i,a=0,b=1,c;
	printf("enter the value of n:");
	scanf("%d",&n);
	printf("the fibonacci series is :");
	for(i=1;i<=n;i++)
	{
		c=a+b;
		printf("%d\n",a);
		a=b;
		b=c;
	} 
}
