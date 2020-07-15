#include<stdio.h>
int main()
{
	float per;
	printf("enter percentage");
	scanf("%f",&per);
	if(per>80)
	{
		printf("A grade");
	}
	else if(per<80&per>=70)
	{
		printf("B grade");
	}
	else if(per<70&per>=60)
	{
		printf("C grade");
	}
	else if(per<60&per>=50)
	{
		printf("D grade");
	}
	else if(per<50&per>=40)
	{
		printf("E grade");
	}
	else
	{
		printf("fail");
	}
	return 0;
}
