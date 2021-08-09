#include <bits/stdc++.h>
#include <math.h>

int main()
{
	float a,b,gn;
	std::cout<<"\n Enter two numbers = "<<std::endl;
	std::cin>>a>>b;
	gn = (a>b)?a:b;
	std::cout<<"\n Square value of greatest number = "<<gn*gn<<std::endl;
	return EXIT_SUCCESS;
}
