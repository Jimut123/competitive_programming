#include <stdio.h>
int *function();
int main()
{
	auto int *x;
	int (*ptr)();
	ptr = &function;
	x=(*ptr)();
	printf("%d",*x);
	return 0;
}

int *function()
{
	static int a=10;
	return &a;
}

