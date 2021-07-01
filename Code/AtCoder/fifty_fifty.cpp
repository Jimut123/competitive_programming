#include <bits/stdc++.h>
using namespace std;
int main()
{
	string S;
	map <char,int> mappy;
	int k=0;
	cin>>S;
	for(int i=0;i<S.length();i++)
	{
		mappy[S[i]]++;
	}
	for(auto i:mappy)
	{
		if(i.second!=2)
		{
			k=1;
			break;
		}
	}
	if(k)
		cout<<"No"<<endl;
	else
		cout<<"Yes"<<endl;
	return 0;
}
