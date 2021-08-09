#include <bits/stdc++.h>

int main()
{
	int sumo=0;
	for(int i=10;i<=60;i++)
		(i%2 ==0)?:sumo+=i;

	std::cout<<"Sum of odd numbers = "<<sumo<<std::endl;
	return EXIT_SUCCESS;
}


