#include <stdio.h>
# define max 125

struct abc{
	char *name;
	int roll;
};
int main()
{
	int a;
       	const int b = 1;
	a = 5;
	//10=5; Lvalue cannot be an integer constant
	//max = 20; Lvalue cannot be a macro constant
	//b=11; Lvalue cannot be assigned to a read only variable
	//abc aa={"sachin",3};
	//printf("%s",aa.name);
	
	return 0;
}
