#include <iostream>
using namespace std;

int main()
{
	long long L = 10000LL;
	cout<<L<<"\n";
	for(int i=0;i<100;i++)
	{
		L+= 1000000000;
		cout<<L<<"\n";
	}
	return 0;
}
