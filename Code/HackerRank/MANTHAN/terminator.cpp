#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b;
	for(int i=a+1;i<=b+a;i++)
	{
		if(i%a==0 )
		{
			c=i;
			break;
		}
	}
	cout<<c+b<<endl;
	return 0;
}

