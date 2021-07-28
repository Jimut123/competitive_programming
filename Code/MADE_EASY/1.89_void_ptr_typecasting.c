#include <stdio.h>
int main()
{
	void *ptr;
	int a = 5;
	float b  = 5.5;
	ptr = &a;
	// void pointer typecasted to int pointer
	printf("\n%d",*((int *)ptr));
	ptr = &b;
	// void pointer typecasted to float pointer
	printf("\n%f",*((float *)ptr));
	return 0;
}

