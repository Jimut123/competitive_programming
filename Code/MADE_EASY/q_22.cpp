#include <iostream>

int main()
{
	char arr[10][20][30];
	char (*ptr)[10][20][30] = &arr;
	printf("%d\n",(&arr+2)-&arr);
	printf("%d\n",(unsigned)(arr+3)-(unsigned)(arr+1));
	printf("%d\n",(unsigned)(ptr+3)-(unsigned)(ptr+1));
	return 0;
}
