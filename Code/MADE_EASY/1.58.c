#include <stdio.h>
void Binary(int);

char A[10]={'a','b','c','d','e','f'};

void Binary(int n)
{
	if (n<1)
		printf("%s",A);
	else
	{
		//printf("%s",A);
		A[n-1]=0;
		Binary(n-1);
		A[n-1]=1;
		Binary(n-1);
	}
}

int main()
{
	Binary(5);
	return 0;
}
