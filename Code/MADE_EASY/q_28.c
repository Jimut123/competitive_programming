#include <stdio.h>
int fun(int n, int *fp)
{
	int t,f;
	if(n<=1)
	{
		*fp = 1;
		return 1;
	}
	t = fun(n-1, fp);
	f = ++*fp;
	*fp = t;
	return (f);
}


int main()
{
	int x = 15;
	printf("%d", fun(4, &x));
	return 0;
}
