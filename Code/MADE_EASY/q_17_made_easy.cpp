#include <stdio.h>

int main()
{

	int a = 50, b = 50;
	a = a++ + ++b;
	printf("%d",a);
	b = b++ + ++a;
	printf("%d",b);
	return 0;
}
