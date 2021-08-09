#include <bits/stdc++.h>

int main()
{
	int sumo=0, sume=0;
	for(int i=1;i<=100;i++)
		(i%2 ==0)?sume+=i:sumo+=i;

	std::cout<<"Sum of odd numbers = "<<sumo<<std::endl;
	std::cout<<"Sum of even numbers = "<<sume<<std::endl;
	return EXIT_SUCCESS;
}


