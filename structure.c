#include<stdio.h>
struct store
{
	char name[30];
	long id;
	int exp;
	float sal;
};
int main()
{
	struct store a;
	struct store b;
	struct store c;
	struct store d;
	struct store e;
	a.name[30]="Ragnar";
	a.id=1001;
	a.exp=6;
	a.sal=100000;
	
	b.name[30] ="Rollo";
	b.id=1002;
	b.exp=6;
	b.sal=80000;
	
	c.name[30]="Bjron";
	c.id=1003;
	c.exp=4;
	c.sal=60000;
	
	d.name[30]="Floki";
	d.id=1004;
	d.exp=5;
	d.sal=90000;
	
	e.name[30]="Ivar";
	e.id=1005;
	e.exp=2;
	e.sal=50000;
	
	return 0;
}
