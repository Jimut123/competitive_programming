#include <stdio.h>
union address
{
	char *name;
	char street[10];
	int pin;
};

int main()
{
	union address emp, *p;
	emp.name = "ja\0pan";
	p = &emp;
	// both are basically the same thing
	// %s prints the string till NULL character i.e., \0
	printf("%s%s",p->name,(*p).name);
	return 0;
}
