#include <stdio.h>
int main()
{
	char arr[] = "madeeasy";
	char *p = arr;
	++*p;
	printf("%c \n",*p);

	*p++;
	printf("%c\n",*p);
	getchar();
	return 0;
}
