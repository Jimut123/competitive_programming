#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2;
	int num;
	cin>>s1>>s2>>num;
	int common_len=0;
	for(int i=0;i<s1.length();i++)
	{
		if(s1[i]==s2[i])
			common_len++;
		else
			break;
	}
	--common_len;
	//cout<<common_len<<endl;
	int len_a,len_b;
	len_a = s1.length()-common_len;
	len_b = s2.length()-common_len;
	--len_a;--len_b;
	//cout<<len_a;
	//cout<<len_b;
	if(len_a+len_b<=num)
		cout<<"Yes"<<endl;
	else if(len_a+len_b>num)
		cout<<"No"<<endl;

	return 0;
}
