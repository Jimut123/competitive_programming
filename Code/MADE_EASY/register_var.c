#include <stdio.h>
static int i;
static int i=25;
static int i;
int main()
{
	/*
	register int a=10;
	unsigned int *p;
	p=&a;
	printf("%u",p);
	*/
	static int i;
	printf("%d",i);
	return 0;
}
