#include <bits/stdc++.h>

int is_prime(int n)
{
	for(int i=2;i<=n/2;i++)
		if(n%2==0)
			return 0;

	return 1;
}
int main()
{
	int sump=0,i=0,n;
	while(i++<5)
	{
		std::cout<<"Enter "<<i<<"th numbers: "<<std::endl;
		std::cin>>n;
		// minimizing the no. of code using ternary, as c++ lexical analyzer uses this syntax
		(is_prime(n))? sump+=n:n;
	}
	std::cout<<"Sum of prime numbers: "<<sump<<"\n";
	return EXIT_SUCCESS;
}


