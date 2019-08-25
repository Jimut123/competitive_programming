#include <bits/stdc++.h>
using namespace std;
int main()
{
	int M,N,sum=0;
	cin>>M>>N;
	for(int i=M;i>=2;i--)
	for(int j=N;j>=2;j--)
	sum+=1;
	cout<<sum<<endl;
	return 0;
}

