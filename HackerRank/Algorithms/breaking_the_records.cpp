#include <iostream>
using namespace std;

int main() 
{
	int T,n,k=1,min,max,ls=0,hs=0;
	cin>>T;
	while(T--)
	{
		cin>>n;
		if(k==1)
		{
			min=n;
			max=n;
			k=0;
			//continue;
		}
		if(k==0)
		{
			if(min>n)
			{
				ls++;
				min=n;
			}
			if(n>max)
			{
				hs++;
				max=n;
			}
		}
	}
	cout<<hs<<" "<<ls<<endl;
	return 0;
}
