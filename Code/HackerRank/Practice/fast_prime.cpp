#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>
using namespace std;
/*

g++ -c fast_prime.cpp -o fast_prime.cpp.o -fopenmp

g++ fast_prime.cpp.o -o fast_prime -fopenmp -lpthread

*/
int prime_Till(int n)
{
 	int p=2,dummy;
	vector <int> prime_table;
	//cout<<p<<" ";
	prime_table.push_back(p);
	while(p<n)
	{
		dummy=1;
		p++;
		#pragma omp parallel
		{
		for(vector<int>::iterator i =prime_table.begin();i!=prime_table.end();i++)
		{
			//cout<<"i = "<<i<<" p = "<<p<<endl;
			if(p%(*i)==0 && (sqrt(p)+1)>(*i))
			{
				dummy=0;
				break;
			}
		}
		}
		if(dummy==1)
		{
			//cout<<"push_back = "<<p<<endl;
			prime_table.push_back(p);
		}
	}
	/*	
	for(auto i:prime_table)
	{
		cout<<i<<" ";
	}
	*/
	cout<<prime_table.size();
	
	return 0;
}

int main(int argc, char *argv[])
{
	int T,N;
	N=200000;
	/*
	std::string arg = argv[1];
	try {
	  std::size_t pos;
	   N = std::stoi(arg, &pos);
	  if (pos < arg.size()) {
	    std::cerr << "Trailing characters after number: " << arg << '\n';
	  }
	} catch (std::invalid_argument const &ex) {
	  std::cerr << "Invalid number: " << arg << '\n';
	} catch (std::out_of_range const &ex) {
	  std::cerr << "Number out of range: " << arg << '\n';
	}
	*/
	//cin>>T;
	/*
	while(T--)
	{
	*/
	prime_Till(N);
	//}
}
