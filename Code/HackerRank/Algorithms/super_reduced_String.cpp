#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	string S;
	int flag=1;
	vector <char> str_string;
	cin>>S;
	for(int i=0;i<S.length();i++)
	{
		str_string.push_back(S[i]);
	}
	while(flag==1)
	{
		flag=0;
		for(auto i=0;i<=str_string.size();i++)
		{
			if(str_string[i]==str_string[i+1] && str_string[i]!=' ' && str_string[i+1]!=' ')
			{
				//cout<<"equal => "<<str_string[i]<<str_string[i+1]<<endl;
				str_string[i]=' ';
				str_string[i+1]=' ';
				i=i+2;
				flag=1;
			}

		}
	}
	vector <char> mod;
	for(auto i: str_string)
	{
		if(i !=' ')
			mod.push_back(i);
	}
	if(mod.size()>0)
		for(auto i:mod)
		{
			if(i!=' ')
				cout<<i;
		}
	else
		cout<<"Empty String"<<endl;
	return 0;
}
