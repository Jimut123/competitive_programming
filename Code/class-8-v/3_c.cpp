#include <bits/stdc++.h>

int main()
{
	int sum=0,num;
	for(int i=1;i<=5;i++)
	{
		std::cout<<"Enter "<<i<<"th number ::"<<std::endl;
		std::cin>>num;
		sum+=num%10;
	}

	std::cout<<"Sum of last digits of each numbers = "<<sum<<std::endl;
	return EXIT_SUCCESS;
}


