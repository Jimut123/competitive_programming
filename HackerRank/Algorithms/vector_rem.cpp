#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <algorithm>
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
	int i=3;
	while(i--)
	{
		str_string.erase(remove(str_string.begin(), str_string.end(), 'a'), str_string.end());
		for(auto iter:str_string)
			cout<<iter<<" ";
	}
	return 0;
}
