#include <bits/stdc++.h>

int main()
{
	int largest,smallest,num;
	for(int i=1;i<=10;i++)
	{
		std::cout<<"Enter "<<i<<"th number ::"<<std::endl;
		std::cin>>num;
		if (i==1){largest=num;smallest=num;}
		if(num>=largest) largest=num;
		if(num<=smallest) smallest=num;
	}

	std::cout<<"Largest of 10 numbers = "<<largest<<std::endl;
	std::cout<<"Smallest of 20 numbers = "<<smallest<<std::endl;
	return EXIT_SUCCESS;
}


