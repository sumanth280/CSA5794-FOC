#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("enter the first number:");
	scanf("%d",&a);
	printf("enter the second number:");
	scanf("%d",&b);
	printf("the numbers before swapping is:%d",a);
	printf("\nthe numbers before swapping are:%d",b);
	temp=a;
	a=b;
	b=temp;
	printf("\nthe numbers after swapping is:%d",a);
	printf("\nthe numbers after swapping is:%d",b);
}
