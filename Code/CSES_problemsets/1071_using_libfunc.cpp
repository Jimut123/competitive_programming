#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n,d_i, dummy=0, ns=1, prev, diff;
	cin>>n;
	vector <long long> permutation;
	for(int i=1;i<=n;i++)
	{
		permutation.push_back(i);
	}

	do
	{
		// process permutation
		d_i=0;
		dummy=0;

		/*
		for(auto i:permutation)
			cout<<i<<" ";
		*/
		for(auto i:permutation)
		{
			if(d_i==0)
			{
				d_i = 1;
				prev = i;
			}
			else
			{
				diff = abs(i-prev);
				//cout<<"diff = "<<diff<<"\n";
				if(diff==1)
				{
					dummy=1;
					break;
				}
				prev = i;
			}
			//cout<<i<<" ";
		}
		if (dummy==0) 
		{
			for(auto i:permutation)
				cout<<i<<" ";
			ns=0;
			break;
		}
		
		//cout<<"\n";
	}
	while(next_permutation(permutation.begin(), permutation.end()));

	if(ns)
		cout<<"NO SOLUTION"<<"\n";
}
