#include <stdio.h>
int main()
{
	int i = 0;
	{
XYZ:;
		auto a = 20;
		printf("%d",a);
		a++;
		i++;
	}
	if(i<3)
		goto XYZ;
	return 0;
}
