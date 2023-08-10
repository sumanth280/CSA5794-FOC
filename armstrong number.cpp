#include<stdio.h>
int main()
{
	int r,num,sum=0,temp;
	printf("enter the value of n:");
	scanf("%d",&num);
	temp=num;
	while(temp!=0)
	{
		r=temp%10;
		sum+=(r*r*r);
		temp=temp/10;
	}
	if(sum==num)
	{
		printf("the given number is a armstrong number");
	}
	else
	{
		printf("the given number is not a armstrong number");
	}
}
