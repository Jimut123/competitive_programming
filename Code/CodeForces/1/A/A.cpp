#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,a,ma=0,na=0;
	cin>>n>>m>>a;
	/*
	if(m%a>0)
		ma++;
	if(n%a>0)
		na++;
	cout<<((int)(m/a)*(n/a)+(int)ma*(m/a)*(n/a)+(int)na*(n/a)*(m/a))<<endl;
	*/
	if(m%a>0)
	{
		ma=m-m%a+a;
	}
	else if(m%a==0)
		ma=m;
	if(n%a>0)
	{
		na=n-n%a+a;
	}
	else if(n%a==0)
		na=n;
	cout<<(int)(na*ma)/(a*a)<<endl;
	return 0;
}
