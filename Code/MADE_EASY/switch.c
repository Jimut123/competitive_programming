#include <stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	switch(x){
		case 1: printf("1"); break;
		// we cannot put continue statement inside the switch case
		case 2: printf("2"); continue;
		default: printf("3");
	}
	return 0;
}
