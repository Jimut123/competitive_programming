#include <iostream>
#include <cmath>
using namespace std;

int countDigit(long long n)
{
    return floor(log10(n) + 1);
}
int main()
{
	int k=1,N,dig;
	cin>>N;
	while(N!=0)
	{
		k++;
		dig = countDigit(k);
		if(dig>1)
		{
			while(dig--)
			{
				N--;
				if(N==0)
					cout<<k<<" ";
			}
		}
		else{

			N--;

			if(N==0)
				cout<<k<<" ";
		}
	}
	return 0;
}
