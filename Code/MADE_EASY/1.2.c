#include <stdio.h>
char c;
int main()
{
	static int i;
	printf("int = %d, char =  %c",i,c);
	return 0;
}
