#include<stdio.h>
int main()
{
	int n,sum,i,evensum,oddsum;
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			evensum=evensum+i;
		}
		else
		{
			oddsum=oddsum+i;
		}
	}
	sum=oddsum-evensum;
	printf("\nthe sum is %d",sum);

}
