// Finding the missing number

#include <iostream>
using namespace std;

int main()
{
	long int n,n1,in,sn=0,sum=0;
	cin>>n;
	n1=n;
	while(--n>0)
	{
		cin>>in;
		sum+=in;
	}
	sn = n1*(n1+1)/2;
	cout<<sn-sum<<"\n";
	return 0;
}

