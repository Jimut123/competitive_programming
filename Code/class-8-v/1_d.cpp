#include <bits/stdc++.h>
#include <math.h>

int main()
{
	float a,b,c,largest;
	std::cout<<"\n Enter three numbers = "<<std::endl;
	std::cin>>a>>b>>c;
	largest = (a>b)?((a>c)?a:b):(b>c)?b:c;
	std::cout<<"\n Largest of 3 numbers = "<<largest<<std::endl;
	return EXIT_SUCCESS;
}

