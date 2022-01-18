#include <stdio.h>
int f1(int);

int main()
{
	int a;
	a = f1(10);
	printf("%d",a);
	return 0;
}

int f1(int b)
{
	if (b==0)
		return 0;
	else
	{
		printf("a");
		// b-1 results in limited output, i.e., 10 times
		// b-- results in infinite loop
		f1(b--);
	}
	return 0;
}
