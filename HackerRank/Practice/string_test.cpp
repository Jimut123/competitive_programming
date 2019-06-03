#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s="This is a string";
	while(s.length()>0)
	{
		s.erase(0,1);
		cout<<s<<endl;
	}
	return 0;
}

