#include <iostream>

int g(int e)
{
	if (e>4)
		return (2+ g(e-5)+ g(e-2));
	return 1;
}

int main()
{

	std::cout<<g(15);
	return 0;
}
