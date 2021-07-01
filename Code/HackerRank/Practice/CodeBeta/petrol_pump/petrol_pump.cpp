#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,a=0,b=0;
	int k=0;
	while(cin>>n)
	{
		if(k%2==0)
		{
			if(b>a+n)
			{
				a+=n;
				cout<<"a = "<<n<<" ";
			}
			else
			{
				b+=n;
				cout<<"b = "<<n<<" ";
			}
		}
		if(k%2!=0)
		{
			if(a>b+n)
			{
				b=b+n;
				cout<<"b = "<<n<<" ";
			}
			else
			{
				a+=n;
				cout<<"a = "<<n<<" ";
			}

		}
		k++;
	}
	cout<<endl;
	if(a>b)
		cout<<"a = "<<a<<endl;
	else
		cout<<"b = "<<b<<endl;
	return 0;
}
