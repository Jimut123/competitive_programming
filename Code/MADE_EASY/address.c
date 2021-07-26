#include<stdio.h>
int main()
{
	int i=100;
	unsigned int b = (unsigned)&i;
	printf("\n%u",b);
	printf("\nAddress of variable (signed integer) = %d",&i);
	printf("\nAddress of variable (unsigned integer) = %u",&i);
	printf("\nAddress of variable (hexadecimal number) = %x",&i);
	return 0;
}
