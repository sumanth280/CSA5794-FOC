#include<stdio.h>
int main()
{
	int r,num,temp,reverse=0;
	printf("enter the value of n:");
	scanf("%d",&num);
	temp=num;
	while(temp!=0)
	{
		r=temp%10;
		reverse=reverse*10+r;
		temp=temp/10;
	}
	printf("the reversed number is %d",reverse);
}
