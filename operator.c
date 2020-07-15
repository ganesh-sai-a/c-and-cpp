#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g;
	printf("enter the value of a and b");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("sum of a and b is %d \n",c);
	d=a-b;
	printf("difference of a and b is %d \n",d);
	e=a*b;
	printf("product of a and b is %d \n",e);
	f=a/b;
	printf("quotient of a by b is %d \n",f);
	g=a%b;
	printf("reminder of a by b is %d \n",g);
	return 0;
}
