#include <stdio.h>
int main()
{
	printf("Filename = %s\n",__FILE__);
	printf("Time at the time of compilation = %s\n",__TIME__);
	printf("Date at the time of compilation = %s\n",__DATE__);

	printf("Line = %d\n",__LINE__);
	printf("STDC = %d\n",__STDC__);
	//printf("TINY = %s\n",__TINY__);
	//printf("SMALL = %s\n",__SMALL__);
	//printf("%s\n",__DATE__);
	return 0;
}
