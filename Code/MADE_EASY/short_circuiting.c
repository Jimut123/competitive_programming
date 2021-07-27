#include <stdio.h>
int main()
{
	int a = 5, b= 4;
	bool op = ((a!=b) && printf("Short circuit success") && printf("\nThis also works!"));
	bool op1 = ((a==b) || printf("\nShort circuit success 2") || printf("\nThis also works!"));
	return 0;
}
