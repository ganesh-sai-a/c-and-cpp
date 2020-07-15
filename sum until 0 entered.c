#include<stdio.h>
int main()
{
	int num,sum=0;
	while(num!=0)
	{
		printf("enter a number");
		scanf("%d",&num);
		sum=sum+num;
	}
	printf("sum of all numbers is %d",sum);
	return 0;
}
