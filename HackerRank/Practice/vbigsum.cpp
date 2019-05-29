#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	long long int T;
	long long int sum=0;
	cin>>N;
	while(N--)
	{
		cin>>T;
		//cout<<T;
		sum+=T;
	}
	cout<<sum;
	return 0;
}
