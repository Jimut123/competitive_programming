#include <bits/stdc++.h>

int main()
{
	int N,d,sume=0,sumo=0;
	std::cout<<"Enter a number"<<std::endl;
	std::cin>>N;
	while(N!=0)
	{
		d=N%10;
		(d%2==0)?sume+=d:sumo+=d;
		N=N/10;
	}

	std::cout<<"Sum of even digits: "<<sume<<std::endl;
	std::cout<<"Sum of odd digits: "<<sumo<<std::endl;
	return EXIT_SUCCESS;
}


