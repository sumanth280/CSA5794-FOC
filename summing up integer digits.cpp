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
		sum+=r;
		temp=temp/10;
	}
	printf("the sum of integer number is %d",sum);

}
