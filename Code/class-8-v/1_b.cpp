#include <bits/stdc++.h>
#include <math.h>
int main()
{
	int a,b,c;
	std::cout<<"Enter the length of 3 sides of triangle : "<<std::endl;
	std::cin>>a>>b>>c;

	if (a==b==c)
	{
		std::cout<<"Equilateral!"<<std::endl;
		std::cout<<"Area = "<<(float)sqrt(3)/4*a*a;
	}
	else if ((a==b && a!=c) || (b == c && c!=a) || (c ==a && a!=b))
		std::cout<<"Isosceles!"<<std::endl;
	else
		std::cout<<"Scelene!"<<std::endl;
	return EXIT_SUCCESS;
}
