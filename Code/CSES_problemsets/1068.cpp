#include <iostream>
using namespace std;

// Solving the collatz conjecture


int main()
{
	long int n;
	cin >> n;
	while(n>0)
	{
		cout<<n<<" ";
		if(n==1) break;
	        if(n%2==0) n=n/2;
		else	n=n*3+1;
	}
	return 0;
}

