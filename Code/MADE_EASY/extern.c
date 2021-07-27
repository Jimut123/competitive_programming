#include <stdio.h>
int i = 25;
extern int i;
//extern int i=10;
int main()
{
	//extern int i=10;
	extern int i;
	printf("%d",i);
	return 0;
}

//extern int i=20;
