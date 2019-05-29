#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N,num,pos=0,neg=0,zer=0,k;
	cin>>N;
	k=N;
	while(N--)
	{
		cin>>num;
		if(num>0)
			pos++;
		if(num==0)
			zer++;
		if(num<0)
			neg++;
	}
	N=k;
	//cout<<"N="<<N<<endl;

	printf("%0.6f\n",(pos/(float)N));
	printf("%0.6f\n",(neg/(float)N));
	printf("%0.6f\n",(zer/(float)N));
	
	/*
	cout<<fixed<<setprecision(6)<<(pos/(float)N)<<endl;
	cout<<fixed<<setprecision(6)<<(neg/(float)N)<<endl;
	cout<<fixed<<setprecision(6)<<(zer/(float)N)<<endl;
	*/	
	return 0;

}

