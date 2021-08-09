#include <stdio.h>
int f1(){printf("Jimut "); return 1;}
int f2(){printf("Bahan "); return 1;}
int main()
{
	// since this is left associative, jimut will be print first
	int p = f1()+f2();
	return 0;
}
