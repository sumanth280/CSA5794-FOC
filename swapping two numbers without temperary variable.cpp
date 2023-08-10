#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the first number:");
	scanf("%d",&a);
	printf("enter the second number:");
	scanf("%d",&b);
	printf("the numbers before swapping is:%d",a);
	printf("\nthe numbers before swapping are:%d",b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nthe numbers after swapping is:%d",a);
	printf("\nthe numbers after swapping is:%d",b);
}
