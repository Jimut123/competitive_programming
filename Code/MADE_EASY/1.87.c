#include <stdio.h>
int *fun()
{
	static int x = 5;
	return &x;
}

int main()
{
	int *p = fun();
	fflush(stdin);
	// Not a dangling pointer since it points to a static variable.
	// If it was just int x = 5, then it would have been a dangling pointer
	// and invalid address
	printf("%d",*p);
	return 0;
}

