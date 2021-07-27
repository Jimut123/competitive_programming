#include <stdio.h>
int x = 0;
int f1()
{
	x=5;
	return x;
}
int f2()
{
	x=10;
	return x;
}
int main()
{
	int p = f1()+f2();
	int a;
        a = 1,2,3;
	// since addition is left associative, so the 10 remains the last changed value
	printf("%d\n",x);
	printf("%d\n",a);
	return 0;
}
