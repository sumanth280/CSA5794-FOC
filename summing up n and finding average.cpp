#include<stdio.h>
int main()
{
	int i,n,avg,sum;
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	avg=sum/n;
	printf("the sum is %d",sum);
	printf("\nthe average is %d",avg);
}
