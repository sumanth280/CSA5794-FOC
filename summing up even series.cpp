#include<stdio.h>
int main()
{
	int n,sum,i;
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			sum=sum+i;
			printf("%d\n",i);
		}
	}
	printf("the sum is %d",sum);

}
