#include<stdio.h>

int main()
{
    int limit, num, big = 0;
	printf("Enter the limit\n");
    scanf("%d", &limit);
	printf("Enter %d numbers\n", limit);
	scanf("%d", &num);
    big = num;
    limit = limit - 1;
	while(limit > 0)
    {
        scanf("%d", &num);
        if(num > big)
        {
            big = num;
        }
        limit--;
    }
	printf("Biggest number is %d\n", big);
return 0;
}
