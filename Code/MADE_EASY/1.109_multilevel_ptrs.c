#include <stdio.h>
int main()
{
	int s=2,*r=&s,**q=&r,***p=&q;
	printf("%d",p[0][0][0]);
	return 0;
}
