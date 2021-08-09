#include <bits/stdc++.h>

int main()
{
	int sum=0,num;
	for(int i=1;i<=10;i++)
	{
		std::cout<<"Enter "<<i<<"th number ::"<<std::endl;
		std::cin>>num;
		sum+=num;
	}

	std::cout<<"Sum of numbers = "<<sum<<std::endl;
	std::cout<<"Avg of numbers = "<<(float)sum/10.0<<std::endl;
	return EXIT_SUCCESS;
}


