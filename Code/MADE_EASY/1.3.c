#include <stdio.h>
#include<cstdlib>
int main()
{
	char *p = (char*) malloc(sizeof(char));
	printf("char =  %c",*p);
	return 0;
}
